#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int temp=1;
    // factorial logic
    for(int i=1; i<=num; i++)
    {
        temp = temp*i;
    }
    cout<<"factorial of "<<num<<" is "<<temp;
    return 0;
}