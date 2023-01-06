#include<iostream>
using namespace std;

void minMaxFun(int a[] , int length, int *mi, int*mx)
{
    *mi = *mx = a[0];
    for(int i=1; i<length; i++)
    {
        if(*mi > a[i])
        {
            *mi = a[i];
        }
        if(*mx < a[i])
        {
            *mx = a[i];
        }
    }
}

int main()
{
    int arr[] = {5 , 6 , 7 , 20 , 0,100};
    int length = sizeof(arr)/4;
    int min , max;

    minMaxFun(arr,length,&min,&max);
    cout<<"Minumin value "<<min<<endl;
    cout<<"Maximum value "<<max<<endl;
    
}