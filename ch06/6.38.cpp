#include<iostream>
#include <string>
#include <vector>
#include <array>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };
// returns a pointer to an array of five int elements
auto arrPtr(int i) -> int(&)[5]{
	return (i % 2) ? odd : even; // returns a pointer to the array
}
int main() {
	return 0;

}


