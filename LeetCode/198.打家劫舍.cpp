//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//using namespace std;
//#pragma warning(disable:4996)
//
//int rob(vector<int>& nums) {
//	if (nums.size()==0)
//	{
//		return 0;
//	}
//
//	if (nums.size() == 1)
//		return nums[0];
//
//	int first = nums[0];
//	int second = max(nums[0], nums[1]);
//	if (nums.size() == 2)
//		return second;
//
//	for (int i = 2; i < nums.size(); i++)
//	{
//		int sum = max(first + nums[i], second);
//		first = second;
//		second = sum;
//	}
//	return second;
//	
//}
//
//int main()
//{
//	system("pause"); 
//}
