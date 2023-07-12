#include<iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
/*
s is a reference to const because we don't want to change its value

occurs is a plain reference because its value might be changed (incremented)

c is not passed by reference because we don't need to, we won't change its value
and not in most cases will c be an object

if s is a plain reference we will have a chance to change its value if we want */

// we can't pass a string literal nor a reference to const
//bool is_empty(string& s) { return s.empty(); }
// a modified version:
bool is_empty(const string&  s) { return s.empty(); }
int main()
{
	
	return 0;
}

