/*
i/p -> arr = {3,3,4,5,6,7,4,3}
o/p -> arr = {3,3,5,4,7,6,3,4}

*/

#include<iostream>
using namespace std;

void print(int arr[] , int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void alternetSwap(int arr1[] , int size)
{
    for(int i=0; i<size; i+=2)
    {
        if(i+1<=size)
        {
            swap(arr1[i] , arr1[i+1]);
        }
    }
}

int main()
{
    int arr1[6] = {2,3,4,5,6,7};
    int arr2[7] = {9,8,7,66,5,4,3};

    alternetSwap(arr1,6);
    print(arr1,6);
    cout<<endl;
    alternetSwap(arr2,7);
    print(arr2,7);

    

}