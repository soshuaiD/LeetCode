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
//int mctFromLeafValues(vector<int>& arr) {
//	stack<int> s;
//	int ans = 0;
//	for (int i = 0; i < arr.size(); i++)
//	{
//		while (s.size()>=2&&arr[i]>s.top())
//		{
//			int cur = s.top();
//			s.pop();
//			ans += min(arr[i], s.top()) *cur ;
//			
//		}
//		s.push(arr[i]);
//	}
//	while (s.size()>1)
//	{
//		int cur = s.top();
//		s.pop();
//		ans += cur * s.top();
//	}
//	return ans;
//
//}
//
//int main()
//{
//	system("pause"); 
//}
