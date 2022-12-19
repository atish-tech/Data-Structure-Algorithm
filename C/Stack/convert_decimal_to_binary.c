// program to convert decimal to binary

#include<stdio.h>
#include<conio.h>
#define MAX 16
int arr[MAX];
int first=-1;

// program to pust data in stack
void push(int data)
{
    for(int i=first; i>=0; i-- )
    {
        arr[i+1]=arr[i];
    }
    arr[0]=data;
    first++;
}
// print stack
void print(int temp[])
{
    for(int i=0; i<=first; i++)
    {
        printf("%d ",arr[i]);
    }
}



void convert_d(int num)
{
    while(num!=0)
    {
        int data;
        data = num%2;
        push(data);
        num=num/2;
    }
    printf("Binary value: ");
    print(arr);
}

int main()
{
    int num;
    scanf("%d",&num);
    convert_d(num);
    return 0;
}