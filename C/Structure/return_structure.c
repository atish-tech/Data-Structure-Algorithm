// return structure

#include<stdio.h>
#include<conio.h>

// declear structure
struct data
{
    int x;
    int y;
};
// return structure
struct data edit(struct data temp)
{
    temp.x = ++temp.x;
    temp.y = temp.y + 2;
    return temp;
}

// print structure member
void print(struct data temp)
{
    printf(" %d  %d ",temp.x,temp.y);
}

int main()
{
    //initialized structure
    struct data d1 = {40 , 50};
    struct data d2 = {60 , 70};

    d1 = edit(d1);
    d2 = edit(d2);

    print(d1);
    print(d2);
    return 0;
}