#include<iostream>
using namespace std;

// find second largest element in array
int secondLarge(int *arr,int n)
{
    int large,sLarge=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[i-1])
        {
            large=arr[i];
            if(sLarge>)
                sLarge=arr[i]
        }
    }
    return sLarge;
}
int main()
{
    int arr[5]={4,5,4,3,6};
    cout<<secondLarge(arr,5);
}