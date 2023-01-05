// rotate array by n
#include <bits/stdc++.h>
using namespace std;

void swape(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void reverse(int *arr, int min, int max)
{
    while (max > min)
    {
        swape(arr[min], arr[max]);
        min++;
        max--;
    }
}
// Function to rotate an array by d elements in counter-clockwise direction.
void rotateArr(int arr[], int d, int n)
{
    // code here
    // while (d > n)
    //     d = d - n;
    reverse(arr, n-d, n-1);
    reverse(arr, 0, (n-d-1));
    reverse(arr, 0, n-1);
}
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    rotateArr(arr, 5, 7);
    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
}