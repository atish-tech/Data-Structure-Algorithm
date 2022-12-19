// program to insert node at first and last.
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include"../Library/Link List/link_list.h"
using namespace std;
using namespace first;

// cout<<endl<<head<<
int main()
{
    insert(111);
    insert(222);
    insert(400);
    insert(401);
    print();
    cout<<" "<<Delete();
    cout<<" "<<Delete();
    cout<<endl;
    print();
    getch();
    return 0;
}