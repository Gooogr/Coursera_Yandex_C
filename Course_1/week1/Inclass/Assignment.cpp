#include <iostream>
#include <vector>
using namespace std;

int main(){
	int x = 5;
	x = 6;
	cout << x << endl;
	// Пример того, что в отличии от Python С++ создает глубокую копию при присваивании переменных
	string s = "Hello";
	string t = s;
	t += ", world";
	cout << "s = " << s << endl;
	cout << "t = " << t << endl; 
	// Аналогичный пример для вектора
	vector<string> w = {"a", "b", "c"};
	vector<string> v;
	v = w;
	v[0] = "d";
	cout << w[0] << " " << w[1] << endl; // a b
	cout << v[0] << " " << v[1] << endl; // d b
	return 0;
}
