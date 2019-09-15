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
	int majorityElement(vector<int>& nums) {
		int num = nums[0];
		int times = 1;
		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] == num)
				times++;
			else
			{
				if (--times == 0)
				{
					num = nums[i];
					times = 1;
				}
			}
		}
		return num;
	}
};