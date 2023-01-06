#include<iostream>
using namespace std;

class House
{
    public:
    int room;
    char bed;
    // Paratemeterised Constructor

};

int main()
{
    // Dynamic allocation
    House *tiwari = new House;

    cout<<"Room : "<<tiwari->bed;
   
   

    return 0;
}