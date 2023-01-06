// find s

#include<iostream>
#include<cmath>
using namespace std;

// Compute d = b2 – 4ac

int discriminant(int a , int b , int c)
{
    return b*b-4*a*c;
}




void squareRoot(int a,int b,int c)
{
    int d = discriminant(a,b,c);

    /*
    If d > 0
        calculate root1 = {-b + √(b2 – 4ac)}/2a
        calculate root2 = {-b – √(b2 – 4ac)}/2a
    */
    if(d>0)
    {
        cout<<"root 1 "<<-b + sqrt(d)/2a;
        cout<<"root 1 "<<-b - sqrt(d)/2a;
    }

    /*
    else If d = 0
    calculate root1 = root2 = (-b/2a)
    */

    else if(d == 0)
    {
        cout<<"root1 and root2 are same "<<-b/2a;
    }
    /*
    else
    calculate root1 = {-b + i√-(b2 – 4ac)}/2a
    calculate root2 = {-b + i√-(b2 – 4ac)}/2a
    */

    else
    {
        cout<<"root1 "<<-b+ sqrt(-d)/2a;
        cout<<"root2 "<<-b+ sqrt(-d)/2a;
    }
}


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    squareRoot(a,b,c);
    return 0;

}