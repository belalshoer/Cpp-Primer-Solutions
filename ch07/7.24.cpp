#include<iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
class Screen {
public:
	using pos = string::size_type;

	Screen() = default;
	Screen(pos h, pos w) : height(h), width(w), contents(h* w, ' ') {};
	Screen(pos h, pos w, char c) : height(h), width(w), contents(h* w, c) {};

	char get() const { return contents[cursor]; }
	char get(pos ht, pos wd)const;
	Screen& move(pos r, pos c);

private:
	pos height = 0;
	pos width = 0;
	pos cursor = 0;
	string contents;

};
char Screen::get(pos r, pos c)  const {
	return contents[r * width + c];
}
Screen& Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

int main()
{

	return 0;
}

