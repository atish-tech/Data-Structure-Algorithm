#include<iostream>
using namespace std;

class c1
{
    public:
    int age = 5;
    char name;
    // parametrised constructor
    c1(int age, char name )
    {
        this->age = age;
        this->name = name;
        
    }
    void print()
    {
        cout<<name<<endl<<age;
    }

};

int main ()
{
    c1 obj2(12 , 'b');
    // creating object 
    c1 obj(17 , 'a') ;
    obj.print();
    return 0;
}