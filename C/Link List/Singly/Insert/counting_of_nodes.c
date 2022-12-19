// count the number of node in a link list

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

// count program
void countNode(struct node *temp)
{
    if(temp == NULL)
    {
        printf("node is impty");
    }
    int count=0;
    while(temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    printf("no of pointer is %d",count);

}

int main()
{
    struct node *head;
    head = malloc(sizeof(struct node));
    head->data= 40;
    // head->link=NULL;

    struct node *current;
    current = malloc(sizeof(struct node));
    current->data=50;
    current->link = NULL;
    head->link=current;

    current = malloc(sizeof(struct node));
    current->data=60;
    current->link = NULL;
    head->link->link=current;

    countNode(head);

    return 0;
}