#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;


int main() {
	vector <int> vec1{1, 2};
	vector <int> vec2{1, 2, 3};

	bool flag = true;
	
	int big = 0;
	if (vec1.size() > vec2.size()) big = vec1.size();
	else big = vec2.size();
	auto size = (vec1.size() + vec2.size()) - big;
	for (int i = 0; i < size; ++i) {
		if (vec1[i] != vec2[i]) { flag = false; }
	}
	if (flag) {
		cout << "prefix";
	}
	else cout << "not prefix";
	


	return 0;
}