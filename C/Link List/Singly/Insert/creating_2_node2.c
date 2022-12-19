// creating two node and link to each other
// using pointer

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
    head->x = 40;

    struct node *current;
    current = malloc(sizeof(struct node));
    current->x = 75;
    current->link = NULL;
    head->link = current;

    printf("%d %d %d %d \n", head->x,head->link,current->x,current->link);
    printf("head address %d %d ", head,current);

    return 0;
    
}