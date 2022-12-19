// insert node in a sinrly nexted list at the end 


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *next;
};

void addNodeAtEnd(struct node *temp , int val)
{
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    struct node *ptr = malloc(sizeof(struct node));
    ptr->val = val;
    ptr->next = NULL;

    temp->next = ptr; 

}

void print(struct node *temp)
{
    while(temp != NULL)
    {
        printf("%d  ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}

struct node* addNodeAtBegning(struct node *temp , int val)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->val  = val;
    ptr->next = temp;
    return ptr;

}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->val = 1;
    head->next = NULL;

    addNodeAtEnd(head , 2);
    addNodeAtEnd(head , 3);
    addNodeAtEnd(head , 4);
    addNodeAtEnd(head , 5);
    print(head);
    
    // head = addNodeAtBegning(head , 876786);
    // head = addNodeAtBegning(head , 8376);
    // head = addNodeAtBegning(head , 886);
    // head = addNodeAtBegning(head , 86);
    // head = addNodeAtBegning(head , 6);
    // print(head);
    // Swap node 
    // struct node *ptr1 = head;
    // struct node *ptr2;
    // ptr2 = head->next;
    // int count = 5;
    // while(count --)
    // {
    //     int a = ptr1->val;
    //     ptr1->val = ptr2->val;
    //     ptr2->val = a;

    //     if(ptr1->next->next && ptr2->next->next)
    //     {
    //     ptr1 = ptr1->next->next;
    //     ptr2 = ptr2->next->next;
    //     }
    // }
    // print(head);

    struct node *temp = head;
    while(temp)
    {
        
    }

    return 0;
}