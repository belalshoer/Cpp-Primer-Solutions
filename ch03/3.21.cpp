#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;
void print_str(vector <string> v) {
	cout << "size = " << v.size() << "\n" << "values: " ;
	for (auto it = v.cbegin(); it != v.cend(); it++) cout << (*it) << " ";
	cout << "\n";
}
void print_int(vector <int> v) {
	cout << "size = " << v.size() << "\n" << "values: ";
	for (auto it = v.cbegin(); it != v.cend(); it++) cout << (*it) << " ";
	cout << "\n";
}
int main() {
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };
	print_int(v1);
	print_int(v2);
	print_int(v3);
	print_int(v4);
	print_int(v5);
	print_str(v6);
	print_str(v7);



	return 0;
}