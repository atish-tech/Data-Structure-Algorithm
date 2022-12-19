// ptogram of stack using two temprory stack

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
// push data
void push(struct node** ptr,int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=*ptr;
    *ptr=temp;
}
//pop data
int pop(struct node **ptr)
{
    struct node *temp=*ptr;
    int data=temp->data;
    *ptr=(*ptr)->link;
    return data;
}
//print data
void print(struct node* *ptr)
{
    struct node* temp=*ptr;
    while(temp)
    {
        printf("%d  ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
int main()
{
    int data;
    struct node *top=NULL;
    struct node *temp1=NULL;
    struct node *temp2=NULL;

    push(&top,3);
    push(&top,2);
    push(&top,1);
    print(&top);
    // pop data from original stack
    data=pop(&top);
    push(&temp1,data);
    data=pop(&top);
    push(&temp1,data);
    data=pop(&top);
    push(&temp1,data);
    print(&top);
    print(&temp1);
    //pop data from temproary stack1 to temprory stack2
    data=pop(&temp1);
    push(&temp2,data);
    data=pop(&temp1);
    push(&temp2,data);
    data=pop(&temp1);
    push(&temp2,data);
    print(&temp1);
    print(&temp2);
    //pop data from temp stack2 to main stack
    data=pop(&temp2);
    push(&top,data);
    data=pop(&temp2);
    push(&top,data);
    data=pop(&temp2);
    push(&top,data);
    print(&temp2);
    print(&top);
    return 0;
}