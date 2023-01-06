#include<iostream>
using namespace std;

void reverse_dig(int a,int b)
{

    int rev_a=0;
    int rev_b=0;
    while(a>0)
    {
        rev_a=rev_a*10 + a%10;
        a=a/10;
    }
    while(b>0)
    {
        rev_b=rev_b*10 + b%10;
        b=b/10;
    }
    a=rev_a;
    b=rev_b;

    cout<<a<<" "<<b<<endl;

}
void swap(int a,int b)
{
    //Add your code here.
    int temp=b;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;

}
int main()
{
    int a=1234,b=67890;
    reverse_dig(a,b);

    swap(a,b);
    return 0;
}