#include<iostream>
#include <string>
#include <vector>
#include <array>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
void print(const int* beg, const int* end)
{
	while (beg != end)
		cout << *beg++ << endl;
}
void print(const int arr[], size_t size)
{
	for (size_t i = 0; i != size; ++i) { cout << arr[i] << endl; }
}

void print(int(&arr)[2])
{
	for (auto i : arr) cout << i << endl;
}

int main()
{
	int i = 0, j[2] = { 0, 1 };
	print(std::begin(j), std::end(j));
	print(j, std::end(j) - std::begin(j));
	print(j);
	return 0;
}

