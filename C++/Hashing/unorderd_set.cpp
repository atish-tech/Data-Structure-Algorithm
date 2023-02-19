#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    
    unordered_set<int> s1;
    unordered_set<int> s2 = {1, 4, 5, 3, 2};
    unordered_set<int> s4(s2);
    // s4 = {1, 4, 5, 3, 2}
    // An unordered set using arrays
    int arr[] = {6, 2, 3, 5, 1};
    unordered_set<int> s5(arr,arr+5);
    // s4 = {3, 2, 6} 
    for(auto i : s2)
    {
        cout<<i<<" ";
    }
    if(s2.find(44) != s2.end())
        cout<<"true";

}