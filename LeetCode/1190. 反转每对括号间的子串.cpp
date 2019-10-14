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
//string reverseParentheses(string s) {
//	stack<char> st;
//	string str = "";
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (s[i] == '('|| isalpha(s[i]))
//			st.push(s[i]);
//		else if (s[i] == ')')
//		{
//			str = "";
//			while (st.top()!='(')
//			{
//				str += st.top();
//				st.pop();
//			}
//			st.pop();
//			for (int j = 0; j < str.length(); j++)
//			{
//				st.push(str[j]);
//			}
//		}
//	}
//	str = "";
//	while (!st.empty())
//	{
//		str += st.top();
//		st.pop();
//	}
//	reverse(str.begin(),str.end());
//	return str;
//}
//
//int main()
//{
//	system("pause"); 
//}
