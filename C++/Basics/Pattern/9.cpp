/*

1
2 1
3 2 1
4 3 2 1

*/




#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i;
    for(i=1; i<=n; i++)
    {
        int count = i;
        for(int j=1; j<=i; j++)
        { 
            cout<<count<<" ";
            count = count - 1;
        }
        cout<<endl;
    }
}