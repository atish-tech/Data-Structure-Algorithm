#include <iostream>
using namespace std;

void linearsearch(int *a, int n)
{
    int temp = -1;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            cout << "element found at location: " << i << endl;
            temp = 0;
            break;
        }
    }
    if (temp == -1)
        cout << "element not found" << endl;
}
int main()
{
    int arr[5] = {33, 56, 86, 56, 29};
    cout << "Enter element that you want to search" << endl;
    int num;
    cin >> num;
    linearsearch(arr, num);
    return 0;
}