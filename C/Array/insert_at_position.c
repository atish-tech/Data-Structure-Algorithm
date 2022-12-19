#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[] = {5,6,78,5};
    int pos=2;
    int data=400;
    int size=sizeof(arr)/sizeof(arr[0]);
    int arr2[size+1];
    for(int i=0; i<size+1; i++)
    {
        if(i>=pos)
        {
            if(i==pos)
            {
                arr2[i]=data;
            }
            else
            {
                arr2[i]=arr[i-1];
            }
        }
        else
        {
            arr2[i]=arr[i];
        }
    }
    // print
    for(int i=0; i<size+1; i++)
    {
        printf("%d ",arr2[i]);
    }


    // int arr[] = {1,2,3,4,5};
    // int i;
    // int pos = 2;
    // int data=400;
    // int size=sizeof(arr)/sizeof(arr[0]);
    // int arr2[size+1];
    // int index=pos;
    // // print arr
    // for(i=0; i<5; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    // for(i=0; i<index; i++)
    // {
    //     arr2[i]=arr[i];
    // }
    // arr2[index]=data;
    // for(i=index+1; i<size+1; i++)
    // {
    //     arr2[i]=arr[i-1];
    // }
    // printf("\n");
    // for(i=0; i<6; i++)
    // {
    //     printf("%d ",arr2[i]);
    // }
}