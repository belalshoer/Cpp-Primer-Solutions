#include<iostream>
#include <fstream>
#include<sstream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;



int main()
{
	std::ifstream ifs("file.txt");
	vector<string>vec;
	string line, s;
	while (std::getline(ifs, line))	
		vec.push_back(line);
	
	std::istringstream iss;
	for (auto i = 0; i < vec.size(); ++i) {
		std::istringstream iss(vec[i]);
		while (iss >> s)
			cout << s;

	}
	return 0;
}

