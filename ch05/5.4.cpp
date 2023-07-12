#include<iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
/*
* 
(a) while (string::iterator iter != s.end()) {  . . .  } 
illegal, iter is not defined
a possible fix: 
string::iterator iter = s.begin();
while (iter != s.end()) { . . . }

(b) while (bool status = find(word)) {  . . .  } 
while status is true after the find() function returns its result, do something

if (!status) {  . . .  } illegal, status isn't defined in this scope
a possible fix:
bool status = find(word);
while(status) { . . . }
if(!status) { . . . }
*/
int main() {
	
	return 0;
}