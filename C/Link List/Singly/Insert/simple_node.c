#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

// add node logic
void insertAtEnd(struct node *head , int data)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;

    while(head->link != NULL)
    {
        head=head->link;
    }
    head->link=newNode;
}
// print statement
void print(struct node *head)
{
    while(head)
    {
        printf("%d ",head->data);
        head=head->link;
    }
    printf("\n");
}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    print(head);
    
}