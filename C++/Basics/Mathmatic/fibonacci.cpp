/*
input -> 5
output -> 0 1 1 2 3

*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int c;

    cout<<a<<" "<<b;

    for(int i=2; i<n; i++)
    {
        c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
}