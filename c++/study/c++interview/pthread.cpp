#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

using namespace std;

struct member
{
    int num;
    char *name;
};

// 线程函数~
static void * pthread(void *arg)
{
    struct member *temp;

    printf("~~");

    sleep(2);

    temp = (struct member *)arg;
    
    return NULL; 
}



int main()
{
    pthread_t tidp;
    struct member* b;

    b = (struct member *) malloc (sizeof(struct member));
    b -> num = 1;
    b -> name = "quchao";


    if ((pthread_create))
    {
        /* code */
    }
    


}