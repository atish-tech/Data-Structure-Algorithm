/*
input  = 234
output = 15

subtract = product of digit -sum of digit

*/


#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int sum=0;
    int product=1;
    int data;
    while(num!=0)
    {
        
        
        data = num%10;
        num = num/10;
        sum = sum+data;
        product = product*data;
    
    }
    cout<<product-sum<<endl;
    
    
    return 0;
}