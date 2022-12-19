// reverse stack

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};
// push function
void push(struct node **ptr,int data)
{

    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=*ptr;
    *ptr=temp;
    // printf("%d %d %d %d\n",ptr,*ptr,&ptr,temp);

}
// pop function
int pop(struct node **ptr)
{
    struct node *temp=*ptr;
    int data=temp->data;
    *ptr=(*ptr)->link;
    free(temp);
    temp=NULL;
    return data;
}
//print data
void print(struct node **ptr)
{
    struct node *temp=*ptr;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
// reverse function
void reverse_stack(struct node **top)
{
    struct node *temp1=NULL;
    struct node *temp2=NULL;
    // push data to temp1
    while(*top)
    {
        push(&temp1,pop(top));
    }
    // push data to temp2
    while(temp1!=NULL)
    {
        push(&temp2,pop(&temp1));
    }
    // push data to top
    while(temp2!=NULL)
    {
        push(top,pop(&temp2));
    }
    
}

int main()
{
    struct node*top=NULL;
    push(&top,1);
    push(&top,2);
    push(&top,3);
    print(&top);
    // printf("%d",pop(&top));
    reverse_stack(&top);
    print(&top);
    
}