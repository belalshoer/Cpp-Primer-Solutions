#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;


int main() {
	string current, str;
	int cnt = 1;
	vector <int> ivec;
	vector <string> svec;
	if (cin >> current) {
		svec.push_back(current);
		while (cin >> str) {
			if (current == str) {
				++cnt;
			}
			else {
				ivec.push_back(cnt);
				current = str;
				svec.push_back(current);
				cnt = 1;
			}
		}
		ivec.push_back(cnt);
	}
	int max = 0;
	int j = 1;
	for (int i = 0; i < ivec.size(); ++i) {
		if (ivec[i] > max) {
			max = ivec[i];
			j = i;
		}
	}
	
	if (max > 1) cout << "The most repeated word is " << "\"" << svec[j] << "\"" << " and it occured " << max << " times.";
	else cout << "No words were repeated";

	return 0;
}