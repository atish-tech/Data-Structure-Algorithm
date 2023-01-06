#include<iostream>
using namespace std;

class Room 
{
    private:
    int room;
    public:
    int bed;

    int getRoom()
    {
        return room;
    }
    int setBed()
    {
        return bed;
    }
    int setRoom(int r)
    {
        return room = r;
    }
    int setBed(int b)
    {
        return bed = b;
    }

};

int main()
{
    Room tiwari;

    // get room data
    cout<<"No of room : "<<tiwari.getRoom()<<endl;
    cout<<"NO of bed : "<<tiwari.setBed(4);
    return 0;
}