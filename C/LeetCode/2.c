/*
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
*/

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
// logic
struct node *removeNode(struct node *head,int k)
{
    struct node *ptr1;
    struct node *ptr2=head;
     if(ptr2->data==k)
        {
            head=ptr2->link;
            free(ptr2);
            ptr2=head;
        }
    while(ptr2)
    {
            if(ptr2->data==k)
            {
            ptr1->link=ptr2->link;
            free(ptr2);
            ptr2=ptr1->link;
            continue;
            }
            ptr1=ptr2;
            ptr2=ptr2->link;
    }
    return head;
}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 3;
    head->link = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,1);
    insertAtEnd(head,1);
    insertAtEnd(head,3);
    insertAtEnd(head,2);

    print(head);
    int k=1;
    head=removeNode(head,k);
    print(head);
}