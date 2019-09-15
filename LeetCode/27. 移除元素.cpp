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
	int removeElement(vector<int>& nums, int val) {
		int length = nums.size();
		int i = 0;
		while (i < length)
		{
			if (nums[i] == val)
			{
				nums[i] = nums[length - 1];
				length--;
			}
			else
				i++;
		}
		return length;
	}
};