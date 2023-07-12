#include<iostream>
int main() {
	/* r1 = v2; legal v2 has a top-level so it is ignored
	p1 = p2; illegal p2 has a low level and p1 is a pointer to int so they don't match
	p2 = p1; legal p1 can be coverted const int*
	p1 = p3; illegal p1 has a low level and they don't match
	p2 = p3; legal they both have a low level
	*/
	return 0;
}