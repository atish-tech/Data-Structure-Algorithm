// creating the first node

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int x;
    struct node *link;
};

int main()
{
    struct node *head;
    head = malloc(sizeof(struct node));
    head->x=5;
    head->link = NULL;

    printf("%d %d ", head->x , head->link );
    return 0;

}
