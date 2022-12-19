// creating single node in link list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int x;
    struct node *link;
};

int main()
{
    struct node *ptr;
    ptr = malloc(sizeof(struct node));

    ptr->x = 45;
    ptr->link = NULL;
    printf("%d %d",ptr->x , ptr->link);

    return 0;
}