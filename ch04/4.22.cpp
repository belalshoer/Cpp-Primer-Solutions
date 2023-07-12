#include<iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
// the if version is more easier to understand because conditional operators
// tend to make a bit of confusion when more than 2 or 3 of them are being checked
int main() {
	int grade;
	cin >> grade;
	cout << ((grade > 90) ? "high pass" : 
		(grade < 60) ? "fail" : 
		(grade < 76) ? "low pass" : "pass");
	cout << "\n";
	if (grade > 90) cout << "high pass";
	else if (grade < 60) cout << "fail";
	else if (grade < 76) cout << "low pass";
	else cout << "pass";

	}