// move zero to end

#include<iostream>
using namespace std;

// move zero at the end
// with time compilixity O(n^2)
void move1(int *arr,int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            for(int j=i; j<n; j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
}

// move zero at the end
// with time compilixity O(n^2)
void move2(int *arr, int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[count],arr[i]);
            count++;
        }
    }
}

int main()
{
    int arr[7]={3,0,5,0,6,0,8};
    move2(arr,7);
    for(int i=0; i<7; i++)
        cout<<arr[i]<<" ";
}