// pass array of structure ad argument

#include<stdio.h>

struct data 
{
    int x;
    char y;
};

void print(struct data temp[])
{
    for(int i=0; i<2; i++)
    {
        printf("%d %c ",temp[i].x , temp[i].y);
    }
}

int main()
{
    struct data arr[2] = {{2 , 'a'} , {1 , 'b'}};

    print(arr);
    return 0;
}
