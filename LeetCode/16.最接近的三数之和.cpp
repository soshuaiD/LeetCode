#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;

class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		if (nums.size() < 3)
			return -1;
		sort(nums.begin(), nums.end());

		int close = 99999;
		for (int i = 0; i < nums.size() - 2; i++)
		{
			int l = i + 1;
			int r = nums.size() - 1;

			while (l < r)
			{
				if (nums[i] + nums[l] + nums[r] == target)
				{
					close = target;
					return close;
				}

				else if (nums[i] + nums[l] + nums[r] < target)
				{
					/*int temp = nums[l];
					while (nums[l] == temp && l < r)
						l++;*/
					if (abs(target - nums[i] - nums[l] - nums[r]) < abs(target - close))
						close = nums[i] + nums[l] + nums[r];
					l++;
				}
				else
				{
					/*int temp = nums[r];
					while (nums[r] == temp && l < r)
						r--;*/
					if (abs(target - nums[i] - nums[l] - nums[r]) < abs(target - close))
						close = nums[i] + nums[l] + nums[r];
					r--;
				}
			}
		}
		return close;
	}
};