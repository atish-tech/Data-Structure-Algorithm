#include<stdio.h>
#include<conio.h>

struct data{
    char name[50];
    int age;
    float id;
};

void print(char n[] , int a,float id)
{
    printf("%s %d %.2f",n,a,id);
}

int main()
{
    struct data d1 = {"aatish" , 17 , 2.5};
    print(d1.name,d1.age,d1.id);
    return 0;
}