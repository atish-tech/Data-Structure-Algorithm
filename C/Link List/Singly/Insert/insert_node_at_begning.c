// insert node at the begning

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node* addNode(struct node *ptr2 , int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    ptr2->link = temp;

    return temp;

}

void printNode(struct node *head)
{
    if(head==NULL)
    {
        printf("node is empty");
    }
    else
    {
        while(head != NULL)
        {
            printf("%d ",head->data);
            printf("%d  ",head->link);
            head = head->link;
        }
    }
}

int main()
{
    struct node *head;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=4;
    head->link=NULL;

    // struct node *ptr;
    // ptr = head;
    head = addNode(head,5);
    head = addNode(head,6);
    head = addnode(head,7);
    
    printNode(head);
    
}