#include<iostream>
// #include<rajfile>
using namespace std;

int main()
{
    
    int num;
    cin>>num;
    int a=0 , b=1 , c;
    cout<<"Fibonacci series of "<<num<<" is : ";
    cout<<a<<" "<<b<<" ";
    // logic of fibonacci series
    for(int i=1; i<=num-2; i++)
    {
        c = a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    } 
    

    return 0;
}