#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;
/*we wrote mid = beg + (end - beg) / n which is in reality: iter = iter + n
* and didn't write mid = (beg + end) / 2 which is in reality: iter = (iter + iter) / 2
* because the second one is illegal and the reason behind that is that we can subtract two iterators
* to give us the difference which is of type difference_type but we can't add two iterators
*/
int main() {
	


	return 0;
}