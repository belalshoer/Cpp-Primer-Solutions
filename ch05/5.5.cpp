#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;

int main() {
	vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	int grade;
	string letter;
	cin >> grade;
	if (grade < 60) { 
		letter = scores[0];
	}
	else {
		letter = scores[(grade - 50) / 10];
		if ((grade % 10) >= 7) letter += "+";
		else if (((grade % 10) <= 3) && grade != 100) letter += "-";
	}
	cout << letter;
	
	return 0;
}