// Given a string str containing alphanumeric characters. 
// The task is to calculate the sum of all the numbers present in the string.

#include<iostream>
#include<string>
using namespace std;

void findSum(string str)
{
    int temp=0;
    string s="";
    for(int i=0; i<str.length(); i++)
    {
        if(isdigit(str[i]))
        {
            s=s+str[i];
        }
        else
        {
            if(s!="")
            {
                temp=temp+stoi(s);
                s="";
            }
        }
    }
    if(s!="")
    {
        temp=temp+stoi(s);
    }
    cout<<temp;
}

int main()
{
    string s ="77ah2a3";
    findSum(s);
    // cout<<a.substr(2,2);
    cout<<"strlen(s) "<<s.length();
    return 0;
}