#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;


int main() {
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0,
		tabCnt = 0, lineCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
	char ch;
	while (cin.get(ch)) {
		switch (ch) {
		case 'f': case 'i':
			++fiCnt;
		case 'a': case'A':
			++aCnt;
			break;
		case 'e': case'E':
			++eCnt;
			break;
		case 'i': case'I':
			++iCnt;
			break;
		case 'o': case'O':
			++oCnt;
			break;
		case 'u': case'U':
			++uCnt;
			break;
		case '\n':
			++lineCnt;
			break;
		case '\t':
			++tabCnt;
			break;
		case ' ':
			++spaceCnt;
			break;

		default:
			;
			break;
		}
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << '\n'
		<< "Number of spaces: \t" << spaceCnt << '\n'
		<< "Number of tabs: \t" << tabCnt << '\n'
		<< "Number of new lines: \t" << lineCnt << '\n'
		<< "Number of \"ff\" : \t" << ffCnt << '\n'
		<< "Number of \"fl\" : \t" << flCnt << '\n'
		<< "Number of \"fi\" : \t" << fiCnt << '\n';


	return 0;
}