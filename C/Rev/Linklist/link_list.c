// Creating a link list


#include<stdio.h>
#include<stdlib.h>


struct node{
    int key;
    struct node *link;
};
void addNode(struct node* head,int key){
    while(head->link !=NULL){
        head=head->link;
    }
   struct node* temp=malloc(sizeof(struct node));
   head->link = temp;
   temp->key=key;
   temp->link = NULL;
}
void printLinkedList(struct node* head){
    int i = 0;
    struct node * temp=head;
    while(temp != NULL){
        printf("%d\n",temp->key);
        temp = temp->link;
        i++;
    }
}
int main(void)
{
   struct node* head = malloc(sizeof(struct node));
   head->link=NULL;
   head->key=5;
   addNode(head, 4);
   addNode(head, 7);
   addNode(head,8);
   printLinkedList(head);

}


