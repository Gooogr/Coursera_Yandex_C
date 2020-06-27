#include <iostream>
#include <string> // Библиотека для использования переменных типа string
#include <vector> // Библиотека для использования переменных типа vector
#include <map>
using namespace std;

// Пример создания пользовательского типа
struct Person {
	string name;
	string surname;
	int age;
};
	 

int main(){
	int x = -5;
	double pi = 3.14;
	bool logical_value = true;
	char symbol = 'Z';
	string hw = "Hello world";
	
	vector<int> nums = {1, 3, 5, 7};
	cout << nums.size() << endl; // << endl; позволяет вывести следующий output с новой строки
	
	map<string, int> name_to_value;
	name_to_value["one"] = 1;
	name_to_value["two"] = 2;
	cout << "two is " << name_to_value["two"] << endl;
	
	vector<Person> stuff;
	stuff.push_back({"Ivan", "Ivanov", 25});
	stuff.push_back({"Petr", "Petrov", 32});
	cout << stuff[0].name;
	
	return 0;
}
