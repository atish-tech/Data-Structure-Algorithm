#include<stdio.h>
#include<conio.h>

int main()
{
    // printf("hello world");
    int a=10;
    void *ptr = &a;
    printf("%d",*((int*)ptr));
    return 0;
}
