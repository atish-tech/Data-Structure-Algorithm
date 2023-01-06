#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout<<"hello world"<<endl;
    int x , y;
    cin>>x>>y;
    cout<<"you are entered "<<x<<" & "<<y<<endl;
    cout<<"add of two no is "<<x+y<<endl;
    cout<<"Devident "<<x<<endl;
    cout<<"Divisor "<<y<<endl;
    cout<<"Quitent "<<x/y<<endl;
    cout<<"Reminder "<<x%y<<endl;
    cout<<"Size of int "<<sizeof(int)<<endl;
    cout <<"size of char "<<sizeof(char)<<endl;
    cout<<"size of float "<<sizeof(float)<<endl;
    cout<<"size of double "<<sizeof(double)<<endl;

    // swap of no
    cout<<"Before swap value is "<<x<<" "<<y<<endl;
    int c = y;
    y = x;
    x = c;
    cout<<"After swap value is "<<x<<" "<<y<<endl;
    // find odd even
    int num;
    cin>>num;
    if(num%2==0)
    {
        cout<<num<<" is even"<<endl;
    }
    else
    {
        cout<<num<<" is odd"<<endl;
    }
    //  check charecter is vobel or constant
    
    getch();
    return 0;
}