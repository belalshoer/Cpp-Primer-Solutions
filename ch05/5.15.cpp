#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
/*
(a) for (int ix = 0; ix != sz; ++ix) {  }
if (ix != sz) ix is undefined 
// . . .
int ix;
for ( ix = 0; ix != sz; ++ix) {  } loop from 0 till ix equals sz
if (ix != sz)

(b) int ix;
for (ix != sz; ++ix) {  } no init statement
int ix = 0;
for (;ix != sz; ++ix) {  } loop from 0 till ix equals sz

(c) for (int ix = 0; ix != sz; ++ix, ++ sz) {  }
there are no errors in the syntax if we consider sz as a defined object 
but if sz does not equal ix this loop will be infinite as
both ix and sz get incremented in every iteration

for (int ix = 0; ix != sz; ++ix) {  } loop from 0 till ix equals sz

*/

int main() {
	string current, str;
	int cnt = 1;
	++ cnt;
	cout << cnt;
	
	return 0;
}