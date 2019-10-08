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
//vector<int> dailyTemperatures(vector<int>& T) {
//	vector<int> ans(T.size(), 0);
//	stack<int> s;
//	for (int i = T.size()-1; i >=0; i--)
//	{
//		while (!s.empty()&&T[s.top()]<=T[i])
//		{
//			s.pop();
//		}
//		ans[i] = s.empty() ? 0 : s.top() - i;
//		s.push(i);
//	}
//	return ans;
//}
//
//int main()
//{
//	system("pause"); 
//}
