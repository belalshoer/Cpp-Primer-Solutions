#include<iostream>
using std::string;
using std::cout;
using std::cin;
/*
(a) *iter++; iter is dereferenced then incremented
(b) (*iter)++; illegal; iter is dereferenced then its yielded value which is a string incremented
(c) *iter.empty(); illgal, empty is not applied to an object
(d) iter->empty(); check if the value pointed with iter is empty
(e) ++*iter; illegal; dereference then increment a string
(f) iter++->empty(); move to the next element and check if the value pointed
with the original iter is empty
*/
int main() {
	
	return 0;
}