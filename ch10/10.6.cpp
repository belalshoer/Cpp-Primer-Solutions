#include<algorithm>
#include<numeric>
#include<iostream>
#include <string>
#include<vector>
#include <set>
#include<deque>
#include<list>
#include<forward_list>

using std::forward_list;
using std::deque;
using std::list;
using std::set;
using std::vector;

using std::string;
using std::cout;
using std::cin;

int main()
{
	int arr[10];
	std::fill_n(std::begin(arr), sizeof(arr) / sizeof(*arr), 0);
	for (auto c : arr) {
		cout << c;
	}

	return 0;
}
