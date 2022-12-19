#include <stdio.h>
#include<stdlib.h>
void change(int** ptr2)
{
    int b;
    b=30;
    *ptr2=&b;
}
int main() {
	// Your code goes here
    int a=10;
    int* ptr=&a;
    printf("%d  ",*ptr);
    change(&ptr);
    printf("%d  ",*ptr);
    
	return 0;
}