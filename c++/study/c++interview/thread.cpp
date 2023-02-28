#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>


#include <unistd.h>
#include <sys/epoll.h>
#include <fcntl.h>

using namespace std;


int main()
{
    const int EVENTS_SIZE = 20;

    char buff[1024];

    // tcp socket!! 网络套接字类型 
    int socketFd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    // 搞定义和赋值的
    sockaddr_in sockAddr{};
    sockAddr.sin_port = htons(8088);
    sockAddr.sin_family = AF_INET;
    sockAddr.sin_addr.s_addr = htons(INADDR_ANY);

    //socket and address bind!
    if (bind(socketFd, (sockaddr *) &sockAddr, sizeof(sockAddr)) == -1)
    {
        cout <<"bind error" << endl;
        return -1;
    }


    if(listen(socketFd, 10) == -1)
    {
        cout << "listen error" << endl;
        return -1;
    }

    int eFd = epoll_create(1);

    epoll_event epev{};

    epev.events = EPOLLIN;
    epev.data.fd = socketFd;
    epoll_ctl(eFd, EPOLL_CTL_ADD, socketFd, &epev);

    epoll_event events[EVENTS_SIZE];

    while (true)
    {
        int eNum = epoll_wait(eFd, events, EVENTS_SIZE, -1);
        
        if (eNum == -1)
        {
            cout << "epoll wait" << endl;
            return -1;

        }

        for (int i = 0; i < eNum; i++)
        {
            if (events[i].data.fd == socketFd)
            {
                // 末尾_t 代表类型的意思！！
                // 按位与？
                if (events[i].events & EPOLLIN)
                {
                    sockaddr_in cli_addr{};
                    socklen_t length = sizeof(cli_addr);

                    int fd = accept(socketFd, (sockaddr *) &cli_addr, &length);
                    if (fd > 0)
                    {
                        // 按位或？
                        epev.events = EPOLLIN | EPOLLET;
                        epev.data.fd = fd;

                        // 如何设置连接为非阻塞形式？

                        int flags = fcntl(fd, F_GETFL, 0);
                        if (flags < 0)
                        {
                            cout << "set no block error,fd:" << fd << endl;
                            // 跳过下面的 继续循环!!
                            continue;
                        }

                        if(fcntl(fd, F_SETFL, flags | O_NONBLOCK) < 0)
                        {
                            cout << "set no block error,fd:" << fd << endl;
                            continue;

                        }

                        epoll_ctl(eFd, EPOLL_CTL_ADD, fd, &epev);
                        cout << "clint on line fd:" << fd << endl;
                    }
                    
                }
            }else{
                if(events[i].events & EPOLLERR || events[i].events & EPOLLHUP)
                {
                    epoll_ctl(eFd, EPOLL_CTL_DEL, events[i].data.fd, nullptr);
                    cout << "client out fd:" << events[i].data.fd << endl;
                    close(events[i].data.fd);
                }else if (events[i].events & EPOLLIN)
                {
                    int len = read(events[i].data.fd, buff, sizeof(buff));

                    if (len == -1)
                    {
                        epoll_ctl(eFd, EPOLL_CTL_DEL, events[i].data.fd, nullptr);
                        cout << "client out fd:" << events[i].data.fd << endl;
                        close(events[i].data.fd);
                    }else{
                        cout << buff << endl;

                        char a[] = "mimiwudi!";

                        write(events[i].data.fd, a, sizeof(a));
                    }
                    
                }
                
            }
            
        }
        
        
    }
    
    
    



}