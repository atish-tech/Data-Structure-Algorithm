#include<stdio.h>
#include<conio.h>

int addData(int size,int data,int arr[])
{
    size = size+1;
    for(int i=size-1; i>=0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = data;  
    return size;
}
int main()
{
    int size , data ;
    scanf("%d %d",&size,&data);
    int arr[size];
    
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    size = addData(size , data , arr);

    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }

    getch();
    return 0;
}