#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;
void print_str(vector <string> vec) {
	for (auto i = 0; i < vec.size(); i++) {
		if ((i % 8) == 0) 
			cout << "\n";
		cout << vec[i] << " ";
	}
}
int main() {
	string word;
	vector <string> vec;
	while (cin >> word) {
		vec.push_back(word);
	}
	for(auto i = 0; i < vec.size(); i++){
		for (auto j = 0; j < vec[i].size(); j++) {
			vec[i][j] = toupper(vec[i][j]);
		}
	}
	print_str(vec);
	

	return 0;
}