/*

    1
  2 3
4 5 6
   

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 1;
    for(int i=1; i<=n; i++)
    {
        for(int s=1; s<=n-i; s++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}