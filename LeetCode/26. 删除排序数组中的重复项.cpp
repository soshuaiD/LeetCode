#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#pragma warning(disable:4996)
using namespace std;

//int removeDuplicates(vector<int>& nums) {
//	int temp = nums[0];
//	vector<int>::iterator it;
//	if (nums.size() == 0)
//		return 0;
//	for (it=nums.begin()+1; it!= nums.end();)
//	{
//		if (*it != temp)
//		{
//			temp = *it;
//			it++;
//		}
//		else
//			nums.erase(it);
//	}
//	return nums.size();
//}
int removeDuplicates(vector<int>& nums) {
	if (nums.size() == 0)
		return 0;
	int i = 0;
	for (int j = 1; j < nums.size();)
	{
		if (nums[i] == nums[j])
			j++;
		else
		{
			nums[++i] = nums[j];
		}
	}
	return i + 1;
}