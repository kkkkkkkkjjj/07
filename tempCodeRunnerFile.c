#include <stdio.h>
#include <stdlib.h>

int all_flies;

extern void sub();

int main(void)
{
    sub();
    printf("%d\n", all_flies);
    return 0;
}

extern int all_flies;
void sub(void)
{
    all_flies = 10;
}

