#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int mod;
    
        
            if(num>=2000)
            {
                cout<<"No of 2000 note: "<<num/2000<<endl;
                num = num%2000;
            }
            if(num>=500)
            {
                cout<<"no of 500 note: "<<num/500<<endl;
                num = num%500;
            }
            if(num>=200)
            {
                cout<<"no of 200 note: "<<num/200<<endl;
                num = num%200;
            }
            if(num>=100)
            {
                cout<<"no of 100 note: "<<num/100<<endl;
                num = num%100;
            }
            if(num>=50)
            {
                cout<<"no of 50 note: "<<num/50<<endl;
                num = num%50;
            }
            if(num>=20)
            {
                cout<<"no of 20 note: "<<num/20<<endl;
                num = num%20;
            }
            if(num>=10)
            {
                cout<<"no of 10 note: "<<num/10<<endl;
                cout<<"chillar: "<<num%10<<endl;

            }

        
    
    return 0;
}