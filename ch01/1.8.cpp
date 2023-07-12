#include <iostream>
int main() {
	std::cout << "/*";
	std::cout << "*/";
	std::cout << "the third one will output an error";
	std::cout << /* "*/" /* "/*" */;
	return 0;
}