#include<stdio.h>
#include<conio.h>

struct data 
{
    int x;
    int y;
};

void print(struct data temp)
{
    printf(" %d   %d  ",temp.x,temp.y);
}

int main()
{
    struct data d1 = {70 , 80};
    struct data d2 = {420 , 480};

    print(d1);
    print(d2);
    print(d1);

    return 0;
}