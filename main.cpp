#include <iostream>
using namespace std;
//Another way to make constants
#define iconst 30
#define iname "Francis"

int main() {
	int a = 001001;
	//shift operator
	a<<=2;
	cout<<a<<endl; 
	cout<<iconst<<endl;
	cout<<iname<<endl;
	//Conditonal on one line
	int x;
	x = true ? 23 : 56; 
	cout<<x<<endl;
	//Another Conditonal on one line
	cout<< (iname == "Francis"? "Hello Francis" : "What is your name then")<<endl;
	
	return 0;
	
}



