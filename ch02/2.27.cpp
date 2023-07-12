#include <iostream>

int main() {
    // (a) int i = -1, &r = 0;  Illegalr is not const so it must be initialized with a reference to an object
    // (b) int *const p2 = &i2; legal a const poiter refers to an int
    // (c) const int i = -1, &r = 0; legal r is a const int & so it can be a reference to a constant
    // (d) const int *const p3 = &i2; legal a const pointer points to a const int
    // (e) const int *p1 = &i2; legal a pointer to a const int
    // (f) const int &const r2; illegal there are no const references but there are references to consts
    // (g) const int i2 = i, &r = i; legal a reference to a const int
    return 0;
}