//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//#include <set>
//using namespace std;
//#pragma warning(disable:4996)
//
//vector<int> nextGreaterElements(vector<int>& nums) {
//	int length = nums.size();
//
//	for (int i = 0; i < length-1; i++)
//		nums.push_back(nums[i]);
//
//	vector<int> all(nums.size(), -1);
//	stack<int> s;
//
//	for (int i = nums.size()-1; i >=0 ; i--)
//	{
//		while (!s.empty()&&s.top()<=nums[i])
//		{
//			s.pop();
//		}
//		all[i] = s.empty() ? -1 : s.top();
//		s.push(nums[i]);
//	}
//	vector<int> ans(all.begin(), all.begin() + length);
//	return ans;
//}
//
//int main()
//{
//	system("pause"); 
//}
