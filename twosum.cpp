#include <iostream>
#include <vector>

using namespace std;

std::vector<int> nums = { 2,3,11,20 };

int target = 31;

vector<int> twosum()
{
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[i] + nums[j] == target)
			{
				return { i, j };
			}
		}
			
	}

	return {};
		
}

int main() {

	vector<int> result = twosum();

	cout << result[0] << " " << result[1];

	return 0;
}