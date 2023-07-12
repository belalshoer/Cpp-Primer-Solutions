#include <iostream>
int main() {
	// (a) const int buf; illegal const cannot be uninitialized
	// (b) int cnt = 0; legal cnt is an int
	// (c) const int sz = cnt; legal const initialized
	// (d) ++cnt; ++sz; ++cnt is legal because it is a nonconst int, sz is illegal becaue it is a const
	return 0;
}