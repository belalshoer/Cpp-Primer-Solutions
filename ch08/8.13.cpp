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
	std::istringstream in("file.txt");
	string line, word;
	vector<PersonInfo> people;
	while (getline(in, line)) {
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);


	}
	for (const auto& entry : people) { // for each entry in people
		std::ostringstream formatted, badNums; // objects created on each loop
		for (const auto& nums : entry.phones) { // for each number
			if (!valid(nums)) {
				badNums << " " << nums; // string in badNums
				}
			else
				// ''writes'' to formatted's string
				formatted << " " << format(nums);
		}
		if (badNums.str().empty()) // there were no bad numbers
			os << entry.name << " " // print the name
			<< formatted.str() << endl; // and reformatted numbers
		else // otherwise, print the name and bad numbers
			cerr << "input error: " << entry.name << " invalid number(s) " << badNums.str() <<
			endl;
	}
	}
	
	}
	return 0;
}

