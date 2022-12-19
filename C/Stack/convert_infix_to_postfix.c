#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

char stack[MAX];
char infix[MAX];
char postfix[MAX];
// int top=-1;

struct node 
{
    char val;
    struct node* next;
}*top=NULL;

void push(int val)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->val=val;
    temp->next=top;
    top=temp;
}
int pop()
{
    struct node* temp=top;
    int val = temp->val;
    top=top->next;
    free(temp);
    temp=NULL;
    return val;
}
int isEmpty()
{
    if(top==NULL)
        return 1;
    return 0;
}
int topStack()
{
    return top->val;
}
// // push fun

// void push(char data)
// {
//     for(int i=top; i>0; i--)
//     {
//         stack[i+1]=stack[i];
//     }
//     stack[0]=data;
//     top++;
// }
// // pop fun
// char pop()
// {
//     char data;
//     data=stack[0];
//     for(int i=0; i>top; i++)
//     {   
//         stack[i]=stack[i+1];
//     }
//     top--;
//     return data;
// }
// logic
// example (90)

// to check the pricidence

int pricidence(char val)
{
    switch(val)
    {
        case '^':
            return 3;
            // break;
        case '*':
        case '/':
            return 2;
        case '-':
        case '+':
            return 1;
        default :
            return 0;
    }
}
void infixToPostfix()
{
    int j=0;
    char symbol,data;
    for(int i=0; i<strlen(infix); i++)
    {
        symbol=infix[i];
        switch(symbol)
        {
            case '(':
                push(symbol);
                break;
            case ')':
                while(((data = pop()) != '('))
                {
                     postfix[j++]=data;
                }
                break;
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                    while(!isEmpty() && pricidence(topStack()) >= pricidence(symbol))
                        postfix[j++]= pop();
                    push(symbol);
                    break;     
            default :
                postfix[j++]=symbol;
        }
    }
    while(!isEmpty())
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
}
int main()
{
    printf("Enter the infix expression  ");
    gets(infix);
    printf("%s   ",infix);
    infixToPostfix();
    printf(">> %s",postfix);
    infixToPostfix();
}