#include <stdio.h>
#include <pthread.h>
#include <memory.h>
 
void swap(int *px, int *py)
{
        int tmp = *px;
        *px = *py;
        *py = tmp;
}
 
int main()
{
        int a = 1;
        int b = 2;
        int c = a + b;
        printf("%d, %d, %d\n", a, b, c);
 
        swap(&a,& b);
        printf("%d, %d, %d\n", a, b, c);
 
        int *p = NULL;
        *p = 0;
 
        return 0;
}