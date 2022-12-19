#include<iostream>
using namespace std;

void insert(int arr[], int size, int index, int element)
    {
        //Your code here
        int a[size];
        for(int i=0; i<index; i++)
            a[i]=arr[i];
        a[index]=element;
        for(int i=index+1; i<size; i++)
            a[i]=arr[i-1];
        
        arr=a;
        for(int i=0; i<size; i++)
        {
            cout<<a[i]<<" ";
        }
        
    }
int main()
{
    int arr[]={1,2,3,4,5};
    insert(arr,6,0,90);
}