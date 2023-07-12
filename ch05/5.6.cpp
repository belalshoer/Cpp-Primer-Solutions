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
	letter = (grade < 60) ? (scores[0]) :  scores[(grade - 50) / 10];
	letter += (grade > 59 && grade < 100) ?
		(grade % 10 <= 3) ? "-" : (grade % 10 >= 7) ? "+" : "" : "";
	cout << letter;
	

	return 0;
}