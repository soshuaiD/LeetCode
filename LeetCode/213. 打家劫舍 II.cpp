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

int rob1(vector<int>& nums)
{
	if (nums.size()==0)
		return 0;

	if (nums.size() == 1)
		return nums[0];

	int first = nums[0];
	int second = max(nums[0], nums[1]);
	if (nums.size() == 2)
		return second;

	for (int i = 2; i < nums.size(); i++)
	{
		int sum = max(first + nums[i], second);
		first = second;
		second = sum;
	}
	return second;
}

int rob(vector<int>& nums) {
	if (nums.size() == 0)
		return 0;

	if (nums.size() == 1)
		return nums[0];

	if (nums.size() == 2)
		return max(nums[0], nums[1]);

	vector<int>nums1, nums2;
	nums1.push_back(nums[0]);
	for (int i = 1; i < nums.size()-1; i++)
	{
		nums1.push_back(nums[i]);
		nums2.push_back(nums[i]);
	}
	nums2.push_back(nums[nums.size() - 1]);
	return max(rob1(nums1), rob1(nums2));
}

int main()
{
	vector<int> v = { 1,1,3,6,7,10,7,1,8,5,9,1,4,4,3 };
	cout << rob(v);
	system("pause"); 
}
