// split string 

#include<bits/stdc++.h>
// #include"string_link_list.h"
using namespace std;
// using namespace first;

int main()
{
    string s="hello raj aatish";
    string temp="";
    stack<string>str;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            str.push(temp);
            temp="";
        }
        else
        {
            temp=temp+s[i];
        }
    }
    str.push(temp);
    while(str.size()>0)
    {
        if(str.size()>1)
            cout<<str.top()<<" ";
        else
            cout<<str.top();
        str.pop();
    }
}