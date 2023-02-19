#include<iostream>
using namespace std;

void fun(int *arr,int left, int mid, int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int arr1[n1];
    int arr2[n2];
    for(int i=0; i<n1; i++)
        arr1[i]=arr[left+i];
    for(int i=mid+1; i<n1; i++)
        arr1[i]=arr[i];
    int i=0;
    int j=0;
    int track=left;
    while(i < n1 and j < n2)
    {
        if(arr1[i] <= arr[j])
        {
            arr[track]=arr1[i];
            track++;
            i++;
        }
        else
        {
            arr[track]=arr2[j];
            track++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[track]=arr1[i];
        i++;
        track++;
    }
    while(j<n2)
    {
        arr[track]=arr2[j];
        j++;
        track++;
    }

}

int main()
{
    int arr[]={1,2,5,8,3,7,15};
    fun(arr,0,3,6);
    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}

