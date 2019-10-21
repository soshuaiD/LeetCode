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
//int mctrFomLeafValues(vector<int>& arr) {
//	int ans = 0;
//	stack<int> s;
//	s.push(INT_MAX);
//	for (int i = 0; i < arr.size(); i++)
//	{
//		while (s.top()<arr[i])
//		{
//			int cur = s.top();
//			s.pop();
//			ans += arr[i] > s.top() ? s.top() * cur : arr[i] * cur;
//		}
//		s.push(arr[i]);
//	}
//	while (s.size()>2)
//	{
//		int cur = s.top();
//		s.pop();
//		ans += s.top() * cur;
//	}
//	return ans;
//}
//
//int main()
//{
//	system("pause"); 
//}
