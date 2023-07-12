#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

struct Person {
	string name, address;
	string get_name() const {
		return name;
	}
	string get_address() const {
		return address;
	}
};
std::istream& read(std::istream& is, Person& person) {
	is >> person.name >> person.address;
	return is;
}
std::ostream& print(std::ostream& os, const Person& person) {
	os << person.name <<' '<< person.address;
	return os;
}


int main()
{
	return 0;
}

