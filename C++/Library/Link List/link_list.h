// to insert first element in link list
#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *link;
};

// global deleraction of head node
node *head=NULL;

namespace first
{
    void insert(int data)
    {
        node* temp=new node;
        temp->data=data;
        temp->link=head;
        head=temp;
    }

    int Delete()
    {
        node* temp=head;
        if(head==NULL)
            return 0;
        int data = temp->data;
        head=head->link;
        delete(temp);
        return data;
    }
   
}

namespace last
{
    void insert(int data)
    {
        if(head==NULL)
        {
            node* temp=new node;
            temp->data=data;
            temp->link=NULL;
            head=temp;
        }
        else
        {
            node* temp=head;
            while(temp->link!=NULL)
            {
                temp=temp->link;
            }
            node* temp2 = new node;
            temp2->data=data;
            temp2->link=NULL;
            temp->link=temp2;
        }
    }
    int Delete()
    {
        node* temp=head;
        if(temp==NULL)
        {
            return 0;
        }
        else if(temp->link==NULL)
        {
            int data=temp->data;
            delete(temp);
            head=NULL;
            return data;
        }
        else
        {
            while(temp->link->link != NULL)
            {
                temp=temp->link;
            }
            int data=temp->link->data;
            delete(temp->link->link);
            temp->link=NULL;
            return data;
        }
    }
}
// print data in link list
void print()
{
    node* temp=head;
    while(temp)
    {
        printf("%d %d      ",temp->data,temp->link);
        temp=temp->link;
    }
}

 