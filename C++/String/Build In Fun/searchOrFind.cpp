// strstr: Used for string searching. 
// find : if str is find then it return the index value
#include <bits/stdc++.h>
using namespace std;


// find str fun

void findstring()
{
    string s1 = "GeeksforGeeks";
    string s2 = "for";
    string s3 = "abc";
    
    //Returns 5 as 'for' is found at 
    //index 5 in s1
    cout << s1.find(s2) << endl;
    
    //s3 is not present in s1
    //so it return npos
    if (s1.find(s3) == string::npos) 
    cout << "String '" << s3 << "' not found\n";
}
int main() 
{ 
    // char s1[] = "GeeksforGeeks";
    // char s2[] = "s";
    // char *p;
    
    // p = strstr(s1, s2);
  
    // if (p) 
    //     cout <<p<<endl; 
    // else
    //     cout << "String not found\n"; 



    // find fun
    findstring();
  
    return 0; 
}