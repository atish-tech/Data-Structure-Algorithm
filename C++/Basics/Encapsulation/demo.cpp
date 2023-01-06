// Demo of encapsulation

#include <iostream>
using namespace std;
// creating class
class c1
{
    private:
    int age;
    char name;

    public:
    int getage()
    {
        return age;
    }
    char getname()
    {
        return name;
    }
    void setage(int age)
    {
        this->age = age;
    }
    void setname(char name)
    {
        this->name = name;
    }
};

int main()
{
    // creating object of class

    c1 obj;

    obj.setname('a');
    obj.setage(17);
    cout<<obj.getname()<<endl;
    cout<<obj.getage();

    return 0;
}