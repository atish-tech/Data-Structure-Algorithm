// prigram to implement the stack using linked list

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*top=NULL;
// check stack is empty or not
int isEmpty()
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// inser element in stack
void push(int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=top;
    top=temp;
}

// delete element in stack
int pop()
{
    if(isEmpty())
    {
        printf("Stack underflow");
        exit(1);
    }
    struct node *temp=top;
    int value=top->data;
    top=top->link;
    free(temp);
    temp=NULL;
    return value;

}

// print top elemrnt
int peak()
{
    if(isEmpty())
    {
        printf("Stack underflow");
        exit(1);
    }
    return top->data;
}
// print all element
void print()
{
    if(isEmpty())
    {
        printf("Stack underflow");
        exit(1);
    }
    struct node *temp=top;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}



int main()
{

    push(7);
    push(8);
    push(9);
    push(10);
    push(11);
    pop();
    pop();
    print(top);
    printf("\n %d ",peak());     
    return 0;

}