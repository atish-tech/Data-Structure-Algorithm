/*

3 2 1
3 2 1
3 2 1

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    

    for(int i=1; n>=i; i++)
    {
        for(int j=n; j>0; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}