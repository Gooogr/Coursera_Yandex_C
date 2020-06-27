#include <iostream>
#include <string>
using namespace std;

int main(){
	int x = 4;
	int y = 5;
	string a = "abc";
	string b = "def";
	
	cout << (x + y) * (x - y) << endl; 
	
	if (x == y) {
		cout << "Equal" << endl;
	} else {
		cout << "Not equal" << endl;
	}
	
	cout << (a + b);
	return 0;
}
