//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//using namespace std;
//
//string countAndSay(int n) {
//	if (n == 1)
//		return "1";
//	else if (n == 2)
//		return "11";
//
//	string str = "11";
//	for (int i = 2; i < n; i++)
//	{
//		string tmp = "";
//		int count = 1;
//		for (int j = 0; j < str.length() - 1; j++)
//		{
//			if (str[j] == str[j + 1])
//			{
//				count++;
//			}
//			else
//			{
//				tmp += to_string(count) + str[j];
//				count = 1;
//			}
//
//		}
//		tmp += to_string(count) + str[str.length() - 1];
//		str = tmp;
//	}
//	return str;
//}
//
