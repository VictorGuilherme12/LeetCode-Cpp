#include <iostream>
#include <string>

using namespace std;

int romanToInt(string s)
{
	return s.length(); // exemplo
}

void RunRomanToInteger()
{
	string input = "III";

	cout << romanToInt(input) << endl;
}