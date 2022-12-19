#include<stdio.h>
#include<stdlib.h>

// Structure
struct node
{
    int data;
    struct node *next;
}*top=NULL;

// push data into stack
void push(int data)
{
    struct node *temp;
    temp->data=data;
    temp->next=top;
    top=temp;
}
// pop data into stack
int pop()
{
    struct node *temp=top;
    int data = temp->data;
    top=top->next;
    free(temp);
    temp=NULL;
    return data;
}
// check stack is empty or not
int isEmpty()
{
    if(top==NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
// palindrome logic
void palindrome(char *c)
{
    int i=0;
    while(c[i]!='X')
    {
        push(c[i]);
        i++;
    }
    i++;
    while(c[i])
    {
        if(pop() || isEmpty())
        {
            printf("Not Pelindrome");
        }
    }
    printf("Pelindrome");
}

int main()
{
    int c[20];
    scanf("%s",c);

    palindrome(c);
}