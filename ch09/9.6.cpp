#include<iostream>
#include <string>
#include <list>
#include <deque>
#include <vector>

using std::vector;
using std::list;
using std::deque;
using std::string;
using std::cout;
using std::cin;
/*
	list<int> lst1;
	list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
	while (iter1 < iter2) 
	we can't apply arithmetic operations on lists
	we could change the list to be a vector or leave the list and change the condition to
	(iter1 != iter2)
*/


int main()
{
	list<int> lst1;
	list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
	while (iter1 < iter2) /* ... */

	return 0;
}

