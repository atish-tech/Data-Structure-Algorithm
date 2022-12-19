// creating two node and link each other
// without using pointer


#include<stdio.h>

struct node
{
    int x;
    struct node *link;
};

int main()
{
    struct node head;
    head.x = 5;
    head.link = NULL;

    struct node current;
    current.x = 50;
    current.link = NULL;
    head.link = &current;

    printf("%d %d %d %d \n",head.x,head.link ,current.x,current.link );
    printf("%d ",head.link->x);
    return 0;
}