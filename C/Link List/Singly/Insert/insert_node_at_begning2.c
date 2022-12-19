#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void addNodeAtBegning(struct node **head , int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    temp->link = *head;
    *head = temp;
}

void print(struct node *head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->link;
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 5;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 4;
    current->link = NULL;
    head->link = current;

    addNodeAtBegning(&head , 70000);
    addNodeAtBegning(&head , 70);
    addNodeAtBegning(&head , 7);
    addNodeAtBegning(&head , 07);
    addNodeAtBegning(&head , 007);

    print(head);


}