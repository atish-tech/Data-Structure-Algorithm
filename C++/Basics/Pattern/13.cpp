/*
A B C 
B C D
C D E

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    { 
        char a = 'A'+(i-1);
        for(int i=1; i<=n; i++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}