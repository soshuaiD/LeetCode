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
//int longestWPI(vector<int>& hours) {
//	int maxlength = 0;
//	stack<int> s;
//	vector<int> pre(hours.size() + 1, 0);
//	for (int i = 0; i < hours.size(); i++)
//	{
//		pre[i + 1] = pre[i] + (hours[i] > 8 ? 1 : -1);
//		if (s.empty()||pre[s.top()]>pre[i])
//		{
//			s.push(i);
//		}
//	}
//
//	for (int i = hours.size(); i >maxlength; i--)
//	{
//		while (!s.empty()&&pre[i]>pre[s.top()])
//		{
//			maxlength = max(maxlength, i - s.top());
//			s.pop();
//		}
//	}
//	return maxlength;
//}
//
//int main()
//{
//	vector<int> hours = { 6,6,9 };
//	cout << longestWPI(hours) << endl;
//	system("pause"); 
//}
