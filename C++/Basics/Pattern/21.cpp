/*
1 1 1 1
  2 2 2
    3 3
      4


*/

#include<iostream>
using namespace std;

int main()
{
    int n;    cin>>n;
    int count = 1;
    for(int i=n; i>0; i--)
    {
        for(int s=1; s<=n-i; s++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<count;
        }
        count++;
        cout<<endl;
    }
}