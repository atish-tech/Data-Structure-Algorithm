#include<iostream>
using namespace std;

int print(int num)
{
    for(int i=1; i<=num; i++)
    {
        cout<< i<<endl;
    }
}

int main()
{
    int num;
    cin>>num;

    print(num);
    return 0;
}

