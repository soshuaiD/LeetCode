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
//vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//	vector<int> all(nums2.size(), -1);
//	stack<int> s;
//	for (int i = nums2.size()-1; i >=0 ; i--)
//	{
//		while (!s.empty()&&s.top()<=nums2[i])
//		{
//			s.pop();
//		}
//		all[i] = s.empty() ? -1 : s.top();
//		s.push(nums2[i]);
//	}
//
//	vector<int> ans(nums1.size(),-1);
//	for (int i = 0; i < nums1.size(); i++)
//	{
//		for (int j = 0; j < nums2.size(); j++)
//		{
//			if (nums1[i]==nums2[j])
//			{
//				ans[i] = all[j];
//				break;
//			}
//		}
//	}
//	return ans;
//
//}
//
//int main()
//{
//	system("pause"); 
//}
