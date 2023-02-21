#include <iostream>
using namespace std;

int max (int x, int y){
	if (x>y){
		return x;
	}
	else {
		return y;
	}
}

int main (){
	int a,b;
	cout << "enter the value of a: ";
	cin >> a;
	cout << "enter the value of b: ";
	cin >> b;
	int m=max(a,b);
	cout << "maximus value is: "<<m;
}
