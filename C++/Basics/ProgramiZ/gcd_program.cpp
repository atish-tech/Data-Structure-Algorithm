// find greatest common factor of two number

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cin>>num1>>num2;

    // swipe number if num1 is greater than num2
    if(num1>num2)
    {
        int temp = num1;
        num1=num2;
        num2=temp;
    }

    // logic
    int hcf;
    for(int i=1; i<=num2; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    cout<<hcf;
    return 0;
}