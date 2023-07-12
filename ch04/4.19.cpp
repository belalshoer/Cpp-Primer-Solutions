#include<iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
/*
(a) ptr != 0 && *ptr++ -> check if ptr is not a nullptr and then check if  then point to the next value
and dereference the original ptr

b) ival++ && ival -> increment ival and check if its original value yields to true
then check if ival (which is no incremented) yields to true

(c) vec[ival++] <= vec[ival]  this yields to an undefined behaviour 
a possible fix:
vec[ival] <= vec[ival+1]

*/
int main() {
	
	return 0;
}