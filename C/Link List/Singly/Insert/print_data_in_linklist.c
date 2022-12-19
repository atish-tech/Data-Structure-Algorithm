// print data in a linklist


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void printData(struct node *temp)
{
    if(temp==NULL)
    {
        printf("link list is empty");
    }
    else
    {
        int count = 0;

        while(temp != NULL)
        {
            printf("%d ",temp->data);
            printf(" %d \n", temp->link);

            temp = temp->link;
        }
    }
}


int main()
{
    struct node *head;
    head = malloc(sizeof(struct node));
    head->data= 40;
    // head->link=NULL;

    struct node *current;
    current = malloc(sizeof(struct node));
    current->data=50;
    current->link = NULL;
    head->link=current;

    current = malloc(sizeof(struct node));
    current->data=60;
    current->link = NULL;
    head->link->link=current;

    printData(head);    

    return 0;
}