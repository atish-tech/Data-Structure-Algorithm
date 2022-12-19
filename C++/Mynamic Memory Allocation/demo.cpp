// demo of dynamic memory allocation

#include<iostream>
using namespace std;

int *fun()
{
    int 4x=10;
    int* ptr=&4x;
    return ptr;
}
int main()
{
    int x;
    cout<<*fun();
}