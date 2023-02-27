#ifndef THREADPOOL_H
#define THREADPOOL_H

#include <list>
#include <cstdio>
#include <exception>
#include <pthread.h>
#include "../lock/locker.h"
#include "../CGImysql/sql_connection_pool.h"

template <typename T>
class threadpool
{
public:
    threadpool(int actor_model, connection_pool *connPool, int thread_number = 8, int max_request = 10000);
    ~threadpool();
    bool append(T *request, int state);
    bool append_p(T *request);
    

private:
    static void *worker(void *arg);
    void run();

private:
    int m_thread_number;
    int m_max_requests;         //请求队列中允许的最大请求数
    pthread_t *m_threads;       //描述线程池的数组，其大小为m_thread_number
    std::list<T *> m_workqueue; //请求队列
    locker m_queuelocker;       //保护请求队列的互斥锁
    sem m_queuestat;            //是否有任务需要处理
    connection_pool *m_connPool;  //数据库
    int m_actor_model;          //模型切换
    
};

template <typename T>
threadpool<T>::threadpool(int actor_model, connection_pool *connPool, int thread_number, int max_requests) : 
                                                                                    m_actor_model(actor_model),
                                                                                    m_thread_number(thread_number),
                                                                                    m_max_requests(max_requests),
                                                                                    m_threads(NULL),
                                                                                    m_connPool(connPool)
{
    if(thread_number <= 0 || max_requests <=0)
        throw std::exception();
    m_threads = new pthread_t[m_thread_number];
    if(!m_threads)
        throw std::exception();
    
    for (int i = 0; i < thread_number; ++i)
    {
        if (pthread_create(m_threads + i, NULL, worker, this) != 0)
        {
            delete[] m_threads;
            throw std::exception();

        }
        if (pthread_detach(m_threads[i]))
        {
            delete[] m_threads;
            throw std::exception();
        }
    }
    
}

template <typename T>
threadpool<T>::~threadpool()
{
    delete[] m_threads;
}

template <typename T>
bool threadpool<T>::append(T *request, int state)
{
    m_queuelocker.lock();
}
