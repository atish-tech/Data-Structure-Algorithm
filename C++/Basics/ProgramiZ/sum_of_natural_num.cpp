// sum of all natural num

#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int temp=0;

    for(int i=1; i<=num; i++)
    {
        temp = temp+i;
    }
    cout<<temp;
    return 0;
}