#include <stdio.h>
#include <stdlib.h>

int inc(int counter)
{
    counter++;
    return counter;
}

int main(void)
{
    int i;
    printf("함수 호출전 i = %d\n", i);
    inc(i);
    printf("함수 호출후 i = %d\n", i);
    return 0;
}
