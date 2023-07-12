#include <iostream>
int main() {
	// int i = 0, &r1 = i; double d = 0, &r2 = d;
	// (a) r2 = 3.14159; valid r2 is a refernces of type double and it is bound to 'd' so 'd' now = 3.14159
	// (b) r2 = r1; valid the value of i gets assigned to d 
	// (c) i = r2;  valid the value of d gets assigned to i (and truncated)
	// (d) r1 = d;  valid the value of d gets assigned to i (and truncated)  i = d
	


	return 0;
}