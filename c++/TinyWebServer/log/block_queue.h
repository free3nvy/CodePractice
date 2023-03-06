
// 这是个阻塞队列得实现
// 循环数组实现得
// .h 声明 .cpp 实现！


#ifndef BLOCK_QUEUE_H
#define BLOCK_QUEUE_H

#include <stdlib.h>
#include "../lock/locker.h"
#include 




using namespace std;
// 不懂得不要写

template <typename T>
class block_queue
{
public:
    block_queue(int max_size = 1000)
    {
        if (max_size <= 0)
        {
            exit(-1);
        }

        m_max_size = max_size;
        m_array = new T[max_size];
        m_size = 0;
        m_front = -1;
        m_back = -1;
    }

    void clear()
    {
        m_mutex.lock();
        m_size = 0;
        m_front = -1;
        m_back = -1;
        m_mutex.unlock();
    }


    ~block_queue()
    {
        m_mutex.lock();
        if (m_array != NULL)
        {
            delete [] m_array;
        }

        m_mutex.unlock();
    }

    bool full()
    {
        m_
    }


private:
    locker m_mutex;
    cond m_cond;

    T *m_array;
    int m_size;
    int m_max_size;
    int m_front;
    int m_back;
    
};




#endif

