// return a pointer to a structure from the the function

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// declear structure
struct data
{
    int a;
    int b;
};

struct data* fun(int x, int y)
{
    struct data *temp;   
    temp = (struct data*)malloc(sizeof(struct data));
    temp->a = x;
    temp->b = y;
    return temp;
}

void print(struct data *temp)
{
    printf("%d %d ", temp->a , temp->b);
}

int main()
{
    struct data *d1 , *d2;

    d1 = fun(1 , 2);
    d2 = fun(3 , 4);

    print(d1);
    print(d2);
    
}