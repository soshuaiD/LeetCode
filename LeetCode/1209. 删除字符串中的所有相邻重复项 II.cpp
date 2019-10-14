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
//struct node {
//	char ch;
//	int times;
//	node(char ch, int times = 0) :ch(ch), times(times) {};
//};
//
//string removeDuplicates(string s, int k) {
//	stack<node> st;
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (st.empty())
//		{
//			st.push(node(s[i], 1));
//		}
//		else
//		{
//			if (st.top().ch==s[i])
//			{
//				if (++st.top().times == k)
//					st.pop();
//			}
//			else
//			{
//				st.push(node(s[i], 1));
//			}
//		}
//	}
//	string ans;
//	while (!st.empty())
//	{
//		for (int i = 0; i < st.top().times; i++)
//		{
//			ans = st.top().ch + ans;
//		}
//	}
//	return ans;
//}
//
//int main()
//{
//	system("pause"); 
//}
