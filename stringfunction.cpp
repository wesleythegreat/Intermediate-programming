#include <iostream>
using namespace std;

int main(){
	char name[30];
	cout<<"Enter name: ";
//	cin>> name;
	gets(name);
	cout<<"Name: ";
	puts (name);
}
