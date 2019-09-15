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
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		vector<vector<int>> f;
		if (nums.size() < 4)
			return f;
		sort(nums.begin(), nums.end());

		for (int i = 0; i < nums.size() - 3; )
		{
			if (nums[i] >= ((target / 4) + 1))
				break;
			for (int j = i + 1; j < nums.size() - 2; )
			{
				int l = j + 1;
				int r = nums.size() - 1;
				while (l < r)
				{
					if (nums[i] + nums[j] + nums[l] + nums[r] == target)
					{
						f.push_back({ nums[i],nums[j],nums[l],nums[r] });

						int temp1 = nums[l];
						while (nums[l] == temp1 && l < r)
							l++;

						int temp2 = nums[r];
						while (nums[r] == temp2 && l < r)
							r--;
					}
						
					else if (nums[i] + nums[j] + nums[l] + nums[r] < target)
						{
							int temp1 = nums[l];
							while (nums[l] == temp1 && l < r)
								l++;
						}
					else
					{
						int temp = nums[r];
						while (nums[r] == temp && l < r)
							r--;
					}
				}		

				int temp2 = nums[j];
				while (nums[j] == temp2 && j < nums.size() - 2)
					j++;
			}
			int temp1 = nums[i];
			while (nums[i] == temp1 && i < nums.size() - 3)
				i++;
		}
		return f;
	}
};