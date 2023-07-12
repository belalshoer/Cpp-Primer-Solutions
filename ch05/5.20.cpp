#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;


int main() {
	bool flag = true;
	string current, value;
	if (cin >> current) {	
		while (cin >> value) {
			if (value == current) {
				flag = false;
				break;
			}
			else {
				current = value;
			}
		}
		if (flag) cout << "no words occured twice in succesion";
		else cout << value << " occured twice in succesion";
	}else  cout << "no words were entered";


	return 0;
}