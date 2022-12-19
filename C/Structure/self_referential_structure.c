// Self referential structure

#include<stdio.h>

struct data
{
    int x;
    int y;
    struct data *ptr;
};

int main()
{
    struct data d1 , d2;
    d1.x = 1;
    d1.y = 2;
    d1.ptr = NULL;
    d2.x = 3;
    d2.y = 4;
    d2.ptr = NULL;

    d1.ptr = &d2;

    printf("%d %d %d %d %d %d  ",d1.x , d1.y ,d1.ptr->x , d1.ptr->y , d2.x ,d2.y);
}