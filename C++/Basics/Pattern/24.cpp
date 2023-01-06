/*

   1
  121
 12312
1234123


*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        // print space
        for(int space=n-row; space>0; space--)
        {
            cout<<" ";
        }
        // first triangel
        for(int col1=1; col1<=row; col1++)
        {
            cout<<col1;
        }
        // second tringel
        for(int col2=1; col2<=row-1; col2++)
        {
            cout<<col2;
        }

        cout<<endl;
    }
}