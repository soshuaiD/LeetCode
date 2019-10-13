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
//bool isValid(string S) {
//	stack<int> s;
//	for (int i = 0; i < S.length(); i++)
//	{
//		if (S[i]=='a')
//		{
//			s.push(S[i]);
//		}
//		else if (S[i]=='b')
//		{
//			if (!s.empty()&&s.top()=='a')
//			{
//				s.push(S[i]);
//			}
//			else
//			{
//				return false;
//			}
//		}
//		else
//		{
//			if (!s.empty() && s.top() == 'b')
//			{
//				s.pop();
//			}
//			else
//			{
//				return false;
//			}
//			if (!s.empty() && s.top() == 'a')
//			{
//				s.pop();
//			}
//			else
//			{
//				return false;
//			}
//
//		}
//	}
//
//	if (s.empty())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	system("pause"); 
//}
