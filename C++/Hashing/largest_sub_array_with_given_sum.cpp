// subarray with 0 sum

#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;

// Nive solution
int fun(int *arr , int n , int sum)
{
    int res=0;
    for(int i=0; i<n; i++)
    {   
        int temp=0;
        for(int j=i; j<n; j++)
        {
            temp=temp+arr[j];
            if(temp==sum)
            {
                res=max(res,j-i+1);
            }
        }
    }
    return res;
}
// optimise solution
int fun2(int *arr , int n , int sum)
{
    unordered_map<int,int> m;
    int temp=0;
    int res=0;
    for(int i=0; i<n; i++)
    {
        int temp = temp + arr[i];
        if(temp==sum)
        {
            res=i+1;
        }
        if(m.find(temp) == m.end())
        {
            m.insert({temp,i});
        }
        if(m.find(temp-sum) != m.end())
        {
            res=max(res,i-m[temp-sum]);
        }        
    }
    return res;

}
int main()
{
    int arr[]={1,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<fun(arr,n,3);
    return 0; 
}