#include<iostream>
#include <cassert>
#include <string>
#include <vector>
#include <array>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
/*
(a) int calc(int&, int&);
int calc(const int&, const int&);
legal

(b) int calc(char*, char*);
int calc(const char*, const char*);
legal

(c) int calc(char*, char*);
int calc(char* const, char* const);
illegal, both will match char*
*/

int main() {

}
