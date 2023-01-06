#include <iostream>
using namespace std;

class c1 // creating class
{
public:
    // default constructor
    c1()
    {
        cout << "default constructor called";
    }
};

int main()
{
    c1 obj; // creating a object class

    return 0;
}