#include <iostream>
int main()
{
	// currVal is the number we're counting; we'll read new values into val
	int currVal = 0, val = 0;
	// read first number and ensure that we have data to process
	if (std::cin >> currVal) {
		int cnt = 1; // store the count for the current value we're processing
		while (std::cin >> val) { // read the remaining numbers
			if (val == currVal) // if the values are the same
				++cnt; // add 1 to cnt
			else { // otherwise, print the count for the previous value
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val; // remember the new value
				cnt = 1; // reset the counter
			}
		} // while loop ends here
		// remember to print the count for the last value in the file
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	} // outermost if statement ends here
	return 0;
}
	// sample input: 4 4 4 4 4 4    output: 4 occurs 6 times
	// sample input: 3 4 5 7 1 2    output: 
									    /*  3 4 5 7 2 1
											3 occurs 1 times
											4 occurs 1 times
											5 occurs 1 times
											7 occurs 1 times
											1 occurs 1 times
											2 occurs 1 times
											*/

