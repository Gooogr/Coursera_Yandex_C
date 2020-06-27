#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	// Посимвольный перебор элементов строки
	string s = "abcdefg";
	for (char c : s ){
		cout << c << ",";
	}
	cout << endl;
	// Перебор элеметов вектора
	vector<int> nums = {1, 2, 3, 4, 5};
	for (int c : nums ){
		cout << c << ",";
	}
	cout << endl;
	// Пример испоьзование внутри цикла счетчика auto
	// Он автоматически настраивается на любой тип итерируемого объекта
	vector<string> strings = {"one", "two", "three", "four", "five"};
	for (auto c : strings ){
		cout << c << ",";
	}
	cout << endl;
	// Подсчет числ пятерок в векторе
	vector<int> num_vector = {1, 5, 3, 4, 5};
	int counter = 0;
	for (auto x : num_vector ){
		if (x == 5){
			counter += 1;
		}
	}
	cout << "There are " << counter << " fives in the vector";
	cout << endl;
	// Аналогичный подсчет с использованием библиотеки algorithm
	vector<int> num_vector2 = {1, 5, 3, 4, 5};
	int counter2 = count(begin(num_vector2), end(num_vector2), 5);
	cout << "There are " << counter2 << " fives in the vector";
	cout << endl;
	// Сортировка
	vector<int> num_vector3 = {1, 4, 5, 3, 2};
	sort(begin(num_vector3), end(num_vector3));
	cout << "Sorted vector: ";
	for (auto x : num_vector3){
		cout << x << " ";
	}
	cout << endl;
	
	
	return 0;	
}
