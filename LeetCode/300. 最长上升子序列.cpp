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

//void bisection(vector<int>& dp, int num)
//{
//	if (num<=dp[0])
//	{
//		dp[0] = num;
//		return;
//	}
//
//	int left = 0;
//	int right = dp.size() - 1;
//
//	while (right-left!=1)
//	{
//		int middle = (right + left) / 2;
//		if (dp[middle] > num)
//		{
//			right = middle;
//		}
//		else if (dp[middle] < num)
//		{
//			left = middle;
//		}
//		else if (dp[middle] == num)
//		{
//			return;
//		}
//	}
//	dp[right] = num;
//}
//
//int lengthOfLIS(vector<int>& nums) {
//	if (nums.size()==0)
//	{
//		return 0;
//	}
//	vector<int> dp;
//	dp.push_back(nums[0]);
//	for (int i = 1; i < nums.size(); i++)
//	{
//		if (nums[i]>dp.back())
//		{
//			dp.push_back(nums[i]);
//		}
//		else if(nums[i] == dp.back())
//		{
//			continue;
//		}
//		else
//		{
//			bisection(dp, nums[i]);
//		}
//	}
//	return dp.size();
//}

int main()
{
	vector<int> dp = { 10,9,2,5,3,7,101,18 };
	cout << lengthOfLIS(dp) << endl;
	system("pause"); 
}
