#include<iostream>
#include<unordered_set>
using namespace std;

int fun(int *arr, int n)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        bool flag=true;
        for(int j=0; j<i; j++)
        {
            if(arr[j]==arr[i])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            res++;
        }
    }
    return res;
}

// efficient approach

int fun2(int *arr , int n)
{
    unordered_set <int> s;
    for(int i=0; i<n; i++)
    {
        if(s.find(arr[i]) == s.end())
        {
            s.insert(arr[i]);
        }
    }
    return s.size();
}

int main()
{
    int arr[]={10,10,10,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Distinct element in an array is: "<<fun2(arr,n);
}