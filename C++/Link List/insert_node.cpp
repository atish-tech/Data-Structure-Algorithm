// program to create node of 3 link list

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

int main()
{
    node *head = new node(5);
    cout<<head->data;
}