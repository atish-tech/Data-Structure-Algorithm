// insert node at begning in circular dybly nod ein link list

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
// logic
struct node *insert(struct node *tail,int data)
{
    struct node *newNode=malloc(sizeof(struct node));
    newNode->data=data;
    newNode->prev=tail;
    newNode->next=tail->next;
    newNode->next->prev=newNode;
    tail->next=newNode;
    return tail;
}
//  print node
void print(struct node *tail)
{
    struct node *temp=tail->next;
    do
    {
        printf("%d %d %d   ",temp->prev,temp->data,temp->next);
        temp=temp->next;
    }while(temp!=tail->next);
}
int main()
{
    struct node *tail=malloc(sizeof(struct node));
    tail->data=1;
    tail->next=tail;
    tail->prev=tail;
    // fun call
    tail=insert(tail,2);
    tail=insert(tail,3);
    tail=insert(tail,4);
    tail=insert(tail,5);

    print(tail);
    return 0;
}