// reverse any number

#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int rev = 0;
    while(num!=0)
    {
        int mod;
        mod = num%10;
        num = num/10;
        rev = rev*10+mod;
    }
    cout<<rev;
    return 0;
}