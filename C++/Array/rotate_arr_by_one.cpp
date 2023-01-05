#include<iostream>
using namespace std;

// rotate array by one
void rotate(int *arr,int n)
{
    int temp=arr[0];
    for(int i=1; i<n; i++)
        arr[i-1]=arr[i];
    arr[n-1]=temp;
}

int main()
{
    int arr[7]={3,4,5,8888,6,7,8};
    rotate(arr,7);
    for(int i=0; i<7; i++)
        cout<<arr[i]<<" ";
}