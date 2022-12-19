// substr: Generate substring from string.
// It takes two arguments (position, no. of characters).

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "GeeksforGeeks";
    
    //1st argument is: position
    //2nd argument is: no. of characters
    cout << s.substr(5, 3) << endl;
    
    //If 2nd argument is not provided, substring
    // is generated from position to end to string
    cout << s.substr(5) << endl;
        
    return 0;
}