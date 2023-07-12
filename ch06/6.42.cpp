#include<iostream>
#include <string>
#include <vector>
#include <array>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
string make_plural(size_t ctr, const string& word,
	const string& ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}

int main() {
	cout << make_plural(2, "success", "es") << '\n' << (5, "failure");
	return 0;

}