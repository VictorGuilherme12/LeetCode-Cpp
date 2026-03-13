#include <iostream>
#include <vector>

using namespace std;

string LongestCommonPrefix(vector<string>& strs)
{
	for (int i = 0; i < strs[0].size(); i++)
	{
		for (int j = 0; j < strs.size(); j++)
		{
			if (strs[j][i] = strs[0][i])
			{
				return strs[0].substr(0, 1);
			}
		}
	}

	return strs[0];
}

void RunLongestCommonPrefix()
{
	vector<string> strs = { "inicial", "início", "inocente" };

	cout << LongestCommonPrefix(strs) << endl;
}