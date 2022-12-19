// pass the address of structure

#include<stdio.h>
#include<conio.h>

// declear structure
struct data
{
    int x;
    int y;
};

// print data with the help of ddress
void print(struct data *temp_ptr)
{
    printf(" %d  %d ", temp_ptr->x = 5,temp_ptr->y = 6);
}

int main()
{
    struct data d1 , d2;
    // struct data d2 = {60 , 70};

    print(&d1); // passing address of structure
    print(&d2); // passing address of structure
}