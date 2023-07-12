#include<iostream>
#include <string>
#include <vector>
#include <array>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

void print(vector <int> vec) {
	if (vec.empty()) 
		return;
	cout << *(vec.begin());
	print(vector<int>(vec.begin() + 1, vec.end()));
	
}
int main() {
	vector<int> vec{ 0, 1, 2, 3 };
	print(vec);

}


