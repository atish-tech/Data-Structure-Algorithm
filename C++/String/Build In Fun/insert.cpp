// insert: Insert another string at a certain position. 
// insert: takes 2 arguments (position, string-to-insert)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "Hello Everyone ";
    string s2 = "and Good Day to ";
    
    //Insert s2 at index 6 of s1
    s2.insert(0, s1);
    
    cout << s2 << endl;
    
    return 0;
}