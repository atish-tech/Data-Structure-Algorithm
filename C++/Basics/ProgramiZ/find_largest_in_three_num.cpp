#include<iostream>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<"you are entered "<<x<<" "<<y<<" "<<z<<endl;

    if(x>y && x>z)
    {
        cout<<x<<" is greater";
    }
    else if(y>x && y>z)
    {
        cout<<y<<" is greater";
    }
    else{
        cout<<z<<" is greater";
    }
    return 0;
}