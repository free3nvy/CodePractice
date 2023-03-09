#include <stdlib.h>
#include <stdio.h>

// size_t 有点int的实质 这里改名了！！
// 传入函数作为参数 这个函数有return的·！！！！
void a(int *array, size_t arraySize, int (*getNextRandomValue)(void))
{
    for (size_t i = 0; i < arraySize; i++)
    {
        array[i] = getNextRandomValue();
    }
    
}

int getNextRandomValue(void)
{
    return rand();
}


int main()
{
    int myarray[10];

    a(myarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++)
    {
        printf("%d", myarray[i]);
        printf("\n");
    }
    printf("\n");
    return 0;
    
}