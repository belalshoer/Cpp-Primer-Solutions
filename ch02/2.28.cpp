#include <iostream>
int main() {
	// (a) int i, *const cp; illegal a const pointer must be initialized if not extern
	// (b) int *p1, *const p2;  illegal a const pointer must be initialized if not extern
	// (c) const int ic, &r = ic; illegal ic is a const int therefore it must be initialized
	// (d) const int *const p3; illegal a const pointer must be initialized if not extern
	// (e) const int *p; legal a pointer to const may be uninitialized
	return 0;
}