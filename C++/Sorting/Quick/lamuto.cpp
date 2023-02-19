#include<iostream>
using namespace std;

// int partition(int *arr,int low, int high)
// {
//     int temp=low-1;
//     int pivot=arr[high];
//     for(int i=low; i<high; i++)
//     {
//         if(arr[i] <= pivot)
//         {
//             swap(arr[++temp] , arr[i]);
//         }
//     }
//     swap(arr[++temp] , arr[high]);
//     return temp;
// }

// revise
int partition(int *arr , int left , int right)
{
    int pivot = arr[right];
    int track=left-1;
    
    for(int i=left; i<right; i++)
        if(arr[i] < pivot)
            swap(arr[++track] , arr[i]);
    swap(arr[++track] , arr[right]);
    return track;
}


// sorting algorithm
void qsort(int *arr,int low,int high)
{
    if(low < high)
    {
        int p=partition(arr,low,high);
        qsort(arr,low,p-1);
        qsort(arr,p+1,high);
    }
}

int main()
{
    int arr[]={10,80,30,90,40,50,70,1,44,5,64};
    qsort(arr,0,10);
    // cout<<partition(arr,0,10)<<endl;


    for(int i=0; i<11; i++)
        cout<<arr[i]<<"  ";
    return 0;
}