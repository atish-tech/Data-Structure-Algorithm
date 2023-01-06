/*

A
B C
C D E 
D E F G

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a='A';
    for(int i=1; i<=n; i++)
    {
        char a = 'A'+i-1;
        for(int j=1; j<=i; j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
        
    }
}