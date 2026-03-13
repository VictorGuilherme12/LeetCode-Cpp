#include <iostream>

using namespace std;

bool isPalindrome(int x)
{
	if (x < 0 || (x % 10 == 0 && x != 0))
	{
		return false;
	}

	int revertedNumber = 0;

	while (x > revertedNumber)
	{
		int digit = x % 10;
		revertedNumber = revertedNumber * 10 + digit;
		x = x / 10;
	}

	if (x == revertedNumber || x == revertedNumber / 10)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void RunPalindrome()
{
	int input1 = 121;
	int input2 = -121;
	int input3 = 10;

	cout << boolalpha << isPalindrome(input1) << endl;
	cout << boolalpha << isPalindrome(input2) << endl;
	cout << boolalpha << isPalindrome(input3) << endl;
}