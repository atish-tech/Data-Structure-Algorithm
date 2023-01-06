#include<iostream>
// using namespace std;
using namespace std;


int main()
{
    int num;
    cin>>num;

    // logic
    for(int i=1; i<=10; i++)
    {
        cout<<"Multiplication of "<<num << "*" <<i<<" is "<<num*i<<endl;
    }
    return 0;
}