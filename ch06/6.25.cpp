#include<iostream>
#include <string>
#include <vector>
#include <array>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[])
{
	string s;
	for (int i = 0; i < argc; ++i) s =  s + argv[i] + " ";
	cout << s;
	return 0;
}

