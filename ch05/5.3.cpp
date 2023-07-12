#include<iostream>
using std::cout;
using std::cin;
/*
i think the readability is the same because this is a simple program but in more
complex programs i believe blocks will be useful
*/
int main() {
	int sum = 0, val = 1;
	
	while (val <= 10)	sum += val, ++val; 
		
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}