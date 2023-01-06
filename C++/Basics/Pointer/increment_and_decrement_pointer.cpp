#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5,4,3,2,1};
    int *ptr = &arr[3];
    
    cout<<*ptr;
    return 0;
}