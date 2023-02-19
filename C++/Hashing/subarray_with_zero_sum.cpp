// subarray with 0 sum

#include<iostream>
#include<unordered_set>
using namespace std;

// Nive solution
bool fun(int *arr , int n)
{
    for(int i=0; i<n; i++)
    {   
        int temp=0;
        for(int j=i; j<n; j++)
        {
            temp=temp+arr[j];
            if(temp==0)
            {
                return true;
            }
        }
    }
    return false;
}
// optimise solution
bool fun2(int *arr , int n)
{
    unordered_set<int> s;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int sum=sum+arr[i];
        if(s.find(sum) != s.end())
        {
            return true;
        }
        if (sum==0)
        {
            return true;
        }
        s.insert(sum);
        
    }
    return false;

}
int main()
{
    int arr[]={6,3,2,4,-4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<fun2(arr,n);
    return 0; 
}