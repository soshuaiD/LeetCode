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
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> t;
		if (nums.size() < 3)
			return t;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 2;)
		{
			int l = i + 1;
			int r = nums.size() - 1;
			if (nums[i] > 0)
				break;
			while (l < r)
			{
				if (nums[i] + nums[l] + nums[r] == 0)
				{
					t.push_back({ nums[i],nums[l],nums[r] });

					int temp1 = nums[l];
					while (nums[l] == temp1 && l < r)
						l++;

					int temp2 = nums[r];
					while (nums[r] == temp2 && l < r)
						r--;
				}
				else if (nums[i] + nums[l] + nums[r] < 0)
				{
					int temp = nums[l];
					while (nums[l] == temp && l < r)
						l++;
				}
				else
				{
					int temp = nums[r];
					while (nums[r] == temp && l < r)
						r--;
				}
			}

			int temp = nums[i];
			while (nums[i] == temp && i < nums.size() - 1)
				i++;
		}
		return t;
	}
};