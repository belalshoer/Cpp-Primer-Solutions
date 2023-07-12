#include<iostream>
#include <fstream>
#include<sstream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;

struct PersonInfo {
	string name;
	vector<string> phones;
};


int main()
{
	std::istringstream record;
	string line, word;
	vector<PersonInfo> people;
	while (getline(cin, line)) {
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);


	}
	for (auto& s : people) {
		cout << s.name << ": ";
		for (auto& n : s.phones) {
			cout << n << " ";
		}
		cout << '\n';
	}
	return 0;
}

