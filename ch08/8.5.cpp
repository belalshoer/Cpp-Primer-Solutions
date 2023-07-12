#include<iostream>
#include <fstream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;

vector<string> read(const string& name) {
	std::ifstream in(name);
	string s;
	vector <string> vec;
	if (in) {
		while (in>>s)
			vec.push_back(s);
	}
	else {
		std::cerr << "couldn't open file";
	}
	return vec;
}



int main()
{
	auto vec = read("file.txt");
	for (auto i = 0; i < vec.size(); ++i) {
		cout << vec[i] << ' ';
	}

	return 0;
}

