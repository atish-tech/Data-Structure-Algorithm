// creating tjree node

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
    head->x= 40;
    // head->link=NULL;

    struct node *current;
    current = malloc(sizeof(struct node));
    current->x=50;
    current->link = NULL;
    head->link=current;

    current = malloc(sizeof(struct node));
    current->x=60;
    current->link = NULL;
    head->link->link=current;



    printf("%d %d  %d %d  %d  %d \n", head->x,head->link , head->link->x,head->link->link , head->link->link->x,head->link->link->link);
    printf("address of node : %d %d %d %d",head,head->link,head->link->link,head->link->link->link);

    return 0;
}