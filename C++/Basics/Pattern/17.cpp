/*
D
C D
B C D
A B C D
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    

    for(int i=1; i<=n; i++)
    {
        char a = 'A'+n-i;
        for(int j=1; j<=i; j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
        
    }
}