#include<iostream>
#include <string>
#include <vector>
#include <array>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
/*
if val = 1 then when factorial(val - 1) happens which is factorial(0) it will return 1 as the (val != 0) condition
is not satisfied. so the reult will be th same.
uf we pass negative numbers to this function it will be stuck in an infinite loop*/
int factorial(int val)
{
	if (val != 0) return factorial(val - 1) * val; return 1;
}
int main() {
	cout << factorial(5);

}


