#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	    int num;
	    cin>>num;
	    num = 2*num;
	    int arr[num];
	    for(int i=0; i<num; i++)
	    {
	        cin>>arr[i];
	    }
	   // logic
	    bool check = true;
	  
	    for(int i=0; i<num; i++)
	    {
	        int count = 0;
	        for(int j=0; j<num; j++)
	        {
	            if(arr[i]==arr[j])
	            {
	                count++;
	                if(count==3)
	                {
	                    cout<<"no"<<endl;
	                    check = false;
	                    break;
	                }
	                
	            }
	        }
            if(check == false)
            {
                break;
            }
	    }
	    if(check)
	    {
	        cout<<"yes"<<endl;
	    }
	
	return 0;
}
