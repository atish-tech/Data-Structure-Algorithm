// check array is shorted or not
// find maximum element in array

#include <iostream>
using namespace std;

// check array is shorted or not
bool checkShort(int *arr,int n)
{
    for(int i=1; i<n; i++)
        if(arr[i]>=arr[i-1])
            continue;
        else
            return false;
    return true;
}
// find largest element in array
int large(int *arr, int n)
{
    int large=0;
    for(int i=1; i<n; i++)
        if(arr[i]>=arr[large])
            large=i;
    // cout<<arr[large]<<endl;
    return large;
}
int main()
{
    
    int arr[4]={2,2,63,4};
    // cout<<checkShort(arr,4)<<endl;
    cout<<arr[large(arr,4)];
    return 0;
}