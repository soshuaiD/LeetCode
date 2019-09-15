#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
using namespace std;
#pragma warning(disable:4996)

//动态规划
//int maxSubArray(vector<int>& nums) {
//	vector<int> dp;
//	dp.push_back(nums[0]);
//	int sum = 0;
//	for (int i = 1; i < nums.size(); i++)
//	{
//		dp[i] = max(dp[i - 1] + nums[i], 0);
//		if (dp[i] > sum)
//			sum = dp[i];
//	}
//	return sum;
//}

//int MaxSub(vector<int>& nums, int left, int right)
//{
//
//	if (left == right)
//		return nums[left];
//	else
//	{
//		int middle = (left + right) / 2;
//		int leftmax = MaxSub(nums, left, middle);
//		int rightmax = MaxSub(nums, middle + 1, right);
//
//		int leftmidmax = nums[middle];
//		int leftmid = 0;
//		for (int i = middle; i >= left; i--)
//		{
//			leftmid += nums[i];
//			if (leftmid > leftmidmax)
//				leftmidmax = leftmid;
//		}
//
//		int rightmidmax = nums[middle + 1];
//		int rightmid = 0;
//		for (int i = middle + 1; i <= right; i++)
//		{
//			rightmid += nums[i];
//			rightmidmax = max(rightmidmax, rightmid);
//		}
//
//		int midmax = leftmidmax + rightmidmax;
//		if (leftmax >= midmax && leftmax >= rightmax)
//			return leftmax;
//		else if (midmax >= leftmax && midmax >= rightmax)
//			return midmax;
//		else
//			return rightmax;
//	}
//}
//
//int maxSubArray(vector<int>& nums)
//{
//	return MaxSub(nums, 0, nums.size() - 1);
//}
