#include <iostream>
#include <stack>

using namespace std;

bool ValidParentheses(string s)
{
	stack<char> st;

	char c;


	for (int i = 0; i < s.size(); i++)
	{
		c = s[i];

		if (c == '(' || c == '[' || c == '{')
		{
			st.push(c);
		}
		else
		{
			if (st.empty())
			{
				return false;
			}

			char top = st.top();

			switch (c) {
			case')':
				if (top != '(')
					return false;
				break;
			case']':
				if (top != '[')
					return false;
				break;
			case'}':
				if (top != '{')
					return false;
				break;
			}

			st.pop();	
		}
		
	}

	if (st.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void RunValidParentheses()
{
	cout << boolalpha << ValidParentheses("()") << endl;
	cout << boolalpha << ValidParentheses("()[]{}") << endl;
	cout << boolalpha << ValidParentheses("(]") << endl;
	cout << boolalpha << ValidParentheses("([])") << endl;
	cout << boolalpha << ValidParentheses("([)]") << endl;
}