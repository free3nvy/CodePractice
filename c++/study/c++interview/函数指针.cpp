#include <stdio.h>
#include <iostream>

using namespace std;

int max(int x, int y)
{
    return x > y ? x : y;
}

int main(void)
{
    int (* p)(int ,int) = & max;
    int a, b, c, d;

    scanf("%d %d %d", &a, &b, &c);

    d = p(p(a, b), c);

    printf("%d", d);
    return 0;
}