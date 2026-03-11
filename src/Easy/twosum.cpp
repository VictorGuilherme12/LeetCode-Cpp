#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
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

void RunTwoSum() {
	
	vector<int> nums = { 2,3,11,20 };
	int target = 31;


	vector<int> result = twoSum(nums, target);

	cout << result[0] << " " << result[1] << endl;
}