#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
	string s, f;
	string::size_type index = 0;
	while (getline(cin, s)) {
		for(auto &c : s){
			if (!(ispunct(c))) {
				cout << c;
			}
			
		}
		
	}
	
}