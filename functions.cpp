#include <iostream>
using namespace std;

int addNumbers(int a, int b);

int main(){
	int n1,n2,sum;
	
	cout << "ener two numbers:";
	cin >> n1>>n2;
	
	sum = addNumbers(n1,n2);
	cout << "the sum is "<< sum<<endl;
}

int addNumbers(int a,int b){
	int result;
	result = a + b;
	return result;
}
