#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

// add node at end logic
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
// add node at position logic
void addNodeAtPossition(int data,int pos,struct node *head)
{
    struct node *newNode=malloc(sizeof(struct node));
    newNode->data=data;
    newNode->link=NULL;
    struct node *ptr=head;
    while(pos!=1)
    {
        ptr=ptr->link;
        pos--;
    }
    newNode->link=ptr->link;
    ptr->link=newNode; 
}
// print statement
void print(struct node *head)
{
    while(head)
    {
        printf("%d ",head->data);
        head=head->link;
    }
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

    int data=6,position=3   ;
    // cin>>data>>position;
    addNodeAtPossition(data,position,head);
    printf("\n");
    print(head);
    
}