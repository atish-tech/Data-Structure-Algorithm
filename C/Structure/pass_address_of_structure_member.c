#include<stdio.h>
#include<conio.h>

struct data1
{
    char name;
    int age;
};

void userinput(char *name_ptr , int *age_ptr)
{
    scanf("%s %d" , name_ptr , age_ptr);
}

int main()
{
    struct data1 d1;
    userinput(&d1.name , &d1.age);
    printf("data %c  %d",d1.name , d1.age);
    return 0;

}