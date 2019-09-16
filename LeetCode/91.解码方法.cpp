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
//int check_single(char ch)
//{
//	if (ch != '0')
//		return 1;
//	else
//	{
//		return 0;
//	}
//}
//
//int check_double(char ch1, char ch2)
//{
//	switch (ch1)
//	{
//	case'1':return 1;
//	case '2':
//	{
//		switch (ch2)
//		{
//		case '0':case '1':case '2':case '3':case '4':case '5':case'6':
//			return 1;
//		default:
//			return 0;
//		}
//	}
//	default:
//		return 0;
//	}
//}
//
////int numDecodings(string s) {
////	vector<int> dp;
////	dp.push_back(check_single(s[0]));
////	if (s.size()==1)
////	{
////		return dp[0];
////	}
////
////	dp.push_back(check_double(s[0], s[1]) + check_single(s[0]) * check_single(s[1]));
////	for (int i = 2; i < s.length(); i++)
////	{
////		dp.push_back(dp[i - 1] * check_single(s[i]) + dp[i - 2] * check_double(s[i - 1], s[i]));
////	}
////	return dp[s.size() - 1];
////}
//
//int numDecodings(string s)
//{
//	int first = (s[0] != '0');
//	if (s.size() == 1)
//		return first;
//	int second = first * (s[1] != '0');
//	if (s[0]=='1')
//	{
//		second++;
//	}
//	else if(s[0]=='2'&&s[1]>='0'&&s[1]<='6')
//	{
//		second++;
//	}
//	
//	for (int i = 2; i < s.length(); i++)
//	{
//		int sum = 0;
//		sum += second * (s[i] != '0');
//		sum += first * (s[i - 1] == '1' ? 1 : (s[i - 1] == '2' ? ((s[i] >= '0' && s[i] <= '6') ? 1 : 0) : 0));
//		first = second;
//		second = sum;
//	}
//	return second;
//}
//
//int main()
//{
//	cout << numDecodings("12") << endl;
//	system("pause"); 
//}
