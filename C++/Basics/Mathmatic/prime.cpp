#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool check = 1;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<"Not prime";
            check = 0;
            break;
        }
        
    }

    if(check == 1)
    {
        cout<<"Prime";
    }
}