#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
struct Person;
std::istream& read(std::istream& is, Person& p);
struct Person {
	string name, address;
	Person() = default;

	Person(const string& s1, const string& s2) : name(s1), address(s2) {};
	Person(std::istream & is) {
		read(is, *this);
	}
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
	os << person.name << ' ' << person.address;
	return os;
}


int main()
{
	Person x;
	print(cout, x);
	return 0;
}

