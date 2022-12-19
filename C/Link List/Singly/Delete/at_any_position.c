// delete node at any position

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
// delete node at any position logic
struct node *deleteNode(int pos, struct node *head)
{
    if(pos==1)
    {
        struct node *ptr=head;
        head=head->link;
        free(ptr);
        return head;
    }
    else
    {
        struct node *current=head;
        struct node *previous=head;
        pos=pos-1;
        while(pos--)
        {
            previous=current;
            current=current->link;
        }
        previous->link=current->link;
        free(current);
        return(head);


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
    int position = 2;
    head = deleteNode(position,head);
    print(head);
    
}