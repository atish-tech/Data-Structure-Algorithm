#include<iostream>
using namespace std;

int *midFun(int a[] , int l)
{
    return &a[l/2];
}

int main()
{
    int arr[] = {5,6,7,9,4};
    int length = sizeof(arr)/4;
    int *mid = midFun(arr,length);
    cout<<"mid address -> "<<mid<<endl;
    cout<<"mid value -> "<<*mid;

}