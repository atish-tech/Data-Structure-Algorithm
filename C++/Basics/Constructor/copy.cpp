#include<iostream>
using namespace std;

class c1
{
    public:
    int age;
    char name;
    
    // parametrised constructor
    c1(int age , char name)
    {
        this->name = name;
        this->age = age;
    }

    // copy constructor
    c1 (c1& temp)
    {
        cout<<"copy constructor called"<<endl;
        this->name = temp.name;
        this->age = temp.age;
    }
    void print()
    {
        
        cout<<age<<endl;
        cout<<name<<endl;
    }
};

int main()
{
    c1 obj1(17 , 'a');
    obj1.print();

    c1 obj2(obj1);
    
    obj2.print();

        return 0;
}