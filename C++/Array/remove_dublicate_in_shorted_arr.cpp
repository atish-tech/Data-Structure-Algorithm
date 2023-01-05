// remove dublicate from shorted array
// move zero to end

#include<iostream>
using namespace std;

// remove dublicate fun
int remove(int *arr,int n)
{
    int count=1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr[count]=arr[i];
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[]={3,3,5,6,6,7,8,8,8,8,4};
    int index=remove(arr,11);
    for(int i=0; i<index; i++)
        cout<<arr[i]<<" ";
}