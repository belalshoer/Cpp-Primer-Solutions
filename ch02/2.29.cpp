#include<iostream>

int main() {
	// (a) i = ic; legal initializing an int with a const int
	// (b) p1 = p3; illegal p3 is a const pointer
	// (c) p1 = &ic; illegal p1 is a pointer to int
	// (d) p3 = &ic; illegal to re-assign
	// (e) p2 = p1; illegal to re-assign p2 is a const int
	// (f) ic = *p3; illegal to re-assign
	return 0;
}