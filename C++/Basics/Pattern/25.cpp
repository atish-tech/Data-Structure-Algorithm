/*

1234554321
1234**4321
123****321
12******21
1********1


*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // row
    for(int row=1; row<=n; row++)
    {
        // first col
        for(int col1=1; col1<=n-row+1; col1++)
        {
            cout<<col1;
        }
        // second col
        for(int col2=1; col2<=row-1; col2++)
        {
            cout<<"*";
        }
        // theird col
        for(int col3=1; col3<=row-1; col3++)
        {
            cout<<"*";
        }
        // fourth col
        for(int col4=n-row+1; col4>0; col4--)
        {
            cout<<col4;
        }

        cout<<endl;
    }
}