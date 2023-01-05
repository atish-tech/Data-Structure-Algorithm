#include<iostream>
using namespace std;

// reverse array
void reverse(int *arr,int n)
{
    int first=0,last=n-1;
    while(last>first)
    {
        int temp=arr[first];
        arr[first]=arr[last];
        arr[last]=temp;
        last--;
        first++;
    }

}
int main()
{
    int arr[7]={3,4,5,8888,6,7,8};
    reverse(arr,7);
    for(int i=0; i<7; i++)
        cout<<arr[i]<<" ";
}