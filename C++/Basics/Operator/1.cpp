#include<iostream>
using namespace std;

int main()
{
    int a , b=1;
    a=10;

    if(++a) // a =10 , a=11
    {
        cout<<"if "<<b;
    }
    else
    {
        cout<<"else"<<++b;
    }
}