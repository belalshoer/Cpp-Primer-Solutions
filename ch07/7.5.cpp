#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
// yeah, they should be "const" as they only return the object with no modifications.
struct Person {
	string name, address;
	string get_name() const {
		return name;
	}
	string get_address() const {
		return address;
	}
};

int main()
{
	return 0;
}

