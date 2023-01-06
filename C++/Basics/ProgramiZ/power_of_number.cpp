// finde power of number

#include<iostream>
using namespace std;

int main()
{
    int power;
    float num;
    cout<<"enter num and power respectively";
    cin>>num>>power;
    float temp = 1;
    // logic
    for(int i=1; i<=power; i++)
    {
        temp = temp*num; 
    }
    cout<<temp;
    return 0;
}