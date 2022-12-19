#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void fun()
{
	cout<<"hello";
	exit(1);
}
int main() {
	cout<<"hello";
	fun();
	
	
	return 0;
}