#include <iostream>
#include <vector>
using namespace std;

int main(){
	// If, else
	int x = 4;
	int y = 5;
	if (x == y){
		cout << "equal";
	}else{
		cout << "non equal";
	}
	cout << endl;
	// for loop
	vector<int> nums = {1, 2, 3};
	for (auto x : nums){
		cout << x << " ";
	}
	cout << endl;
	// for loop with index
	int n = 5;
	int sum = 0;
	for (auto i = 1; i <= n; i++){
		sum += i;
	}
	cout << sum << endl;
	// while
	int m = 5;
	int sum_while = 0;
	int j = 1;
	while (j <= m){
		sum_while += j;
		j++; // j += 1
	}
	cout << sum_while << endl;
	
	return 0;
}

