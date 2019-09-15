#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
using namespace std;


class Solution {
public:
	vector<int> majorityElement(vector<int>& nums) {
		vector<int> ans;
		int n1 = -9999, n2 = -9999, times1 = 0, times2 = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == n1)
				times1++;
			else if (nums[i] == n2)
				times2++;
			else if (times1 == 0)
			{
				times1++;
				n1 = nums[i];
			}
			else if (times2 == 0)
			{
				times2++;
				n2 = nums[i];
			}
			else
			{
				times1--;
				times2--;
			}
		}

		times1 = 0;
		times2 = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == n1)
				times1++;
			if (nums[i] == n2)
				times2++;
		}
		if (times1 > (nums.size() / 3))
			ans.push_back(n1);
		if (times2 > (nums.size() / 3))
			ans.push_back(n2);
		return ans;
	}
};