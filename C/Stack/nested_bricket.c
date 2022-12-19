// program to valid bricket

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

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
int check(char a, char b)
{
    if(a == '[' && b==']')
    {
        return 1;
    }
    if(a=='{' && b=='}')
    {
        return 1;
    }
    if(a=='(' && b==')')
    {
        return 1;
    }
    return 0;
}

int check_blanced(char* s)
{
    int i;
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='[' || s[i]=='{' || s[i]=='(')
        {
            push(s[i]);
        }
        if(s[i]==']' || s[i]=='}' || s[i]==')')
        {
            if(isEmpty())
            {
                printf("\n\nEnvalid expression left bricket less than right bricket");
                return 0;
            }
            int temp=pop();
            if(!check(temp,s[i]))
            {
                printf("\n\nEnvalid expression left bricket is more than right bricket");
                return 0;
            }
        }

    }
    if(isEmpty())
    {
        printf("\n\n Valid Expression \n\n");
    }
    else
    {
        printf("\n\nenvalid expression\n\n");
    }

}

int main()
{
    char expr[100];
    int blanced;
    printf("Enter algebric expression ");
    gets(expr);
    // printf("%s",expr);
    blanced=check_blanced(expr);
    return 0;
}