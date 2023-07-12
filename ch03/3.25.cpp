#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() {
	vector<unsigned> scores(11, 0); 
	std::iterator_traits<std::vector<int>::iterator>::difference_type grade;
	auto it = scores.begin();
	while (cin >> grade) {
		if (grade <= 100) {
			++* (it + (grade / 10));
		}
	}
	for (auto it = scores.cbegin(); it != scores.cend(); it++) cout << (*it) << " ";




	return 0;
}