/*

A B C 
A B C
A B C

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // char a;
    for(int i=1; i<=n; i++)
    {
        char a = 'A';
        for(int i=1; i<=n; i++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    
    return 0;
}