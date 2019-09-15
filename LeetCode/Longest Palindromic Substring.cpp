#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
using namespace std;

//const int maxlen = 1000;
//int dp[maxlen][maxlen];

//class Solution {
//public:
//	//dp
//		memset(dp, 0, sizeof(dp));
//		string longeststring = "";
//		if (s == "")
//			return longeststring;
//		for (int i = 0; i < s.length(); i++)
//			dp[i][i] = 1;
//		longeststring = s[0];
//		for (int i = 0; i < s.length() - 1; i++)
//		{
//			if (s[i] == s[i + 1])
//			{
//				dp[i][i + 1] = 1;
//				longeststring = s.substr(i, 2);
//			}
//		}
//		int flag = 0, times = 0;
//		//i为步长
//		for (int i = 2; i < s.length(); i++)
//		{
//			for (int j = 0; i + j < s.length(); j++)
//			{
//				if (s[j] == s[j + i])
//				{
//					dp[j][j + i] = dp[j + 1][j + i - 1];
//					if (dp[j][j + i])
//					{
//						longeststring = s.substr(j, i + 1);
//						flag = 1;
//						times = 0;
//					}
//
//				}
//				else
//					dp[j][j + i] = 0;
//			}
//			if (flag == 0)
//				times++;
//			if (times == 2)
//				break;
//		}
//		return longeststring;
//	}
//};

//class Solution {
//public:
//	string longestPalindrome(string s) {
		//遍历对称中心 T~O(n^2) S~O(1)
//		string longeststr = "";
//		int maxlen = 0;
//		if (s == "")
//			return longeststr;
//		for (int i = 0; i < 2 * s.length() - 1; i++)
//		{
//			//奇数个字符
//			if (i % 2 == 0)
//			{
//				int i1 = i / 2;
//				for (int j = 0; j < s.length(); j++)
//				{
//					//越界检查
//
//					if ((i1 - j) < 0 || (i1 + j) > s.length())
//						break;
//					if (s[i1 - j] == s[i1 + j])
//					{
//						if (2 * j + 1 > maxlen)
//						{
//							maxlen = 2 * j + 1;
//							longeststr = s.substr(i1 - j, 2 * j + 1);
//						}
//					}
//					else
//						break;
//				}
//			}
//			//偶数个字符
//			else
//			{
//				int i1 = i / 2;
//				for (int j = 1; j < s.length(); j++)
//				{
//					if (i1 - j + 1 < 0 || i1 + j > s.length())
//						break;
//					if (s[i1 - j + 1] == s[i1 + j])
//					{
//						if (2 * j > maxlen)
//						{
//							maxlen = 2 * j;
//							longeststr = s.substr(i1 - j + 1, 2 * j);
//						}
//
//					}
//					else
//						break;
//				}
//
//			}
//		}
//		return longeststr;
//	}
//
//};
const int maxn = 1010;
string tmp = "";
int Len[maxn << 1];

class Solution {
public:
	string longestPalindrome(string s) {
		//Manacher算法
		string str;
		memset(Len, 0, sizeof(Len));
		int len = INIT(s);
		int mx = 0, ans = 0, po = 0;
		//mx为当前计算的回文串最右边字符的最大值
		//po为到最右的字符串中心
		for (int i = 1; i <= len; i++)
		{
			if (mx > i)
				//在Len[j]和mx-i中取小
				Len[i] = min(mx - i, Len[2 * po - i]);
			else
				//i>=mx,要从头开始匹配
				Len[i] = 1;

			//还能匹配上，len++
			while (tmp[i - Len[i]] == tmp[i + Len[i]])
				Len[i]++;

			//如果新计算的回文串右端点位置大于mx，更新
			if ((Len[i] + i) > mx)
			{
				mx = Len[i] + i;
				po = i;
			}

			//更新ans和str
			if (Len[i] > ans)
			{
				ans = Len[i];
				str = tmp.substr(po - ans + 1, 2 * ans - 1);
			}

		}
		return trans(str);
	}

	int INIT(string st)
	{
		int len = st.length();
		tmp = "";
		tmp += '@';
		for (int i = 1; i <= 2 * len; i += 2)
		{
			tmp += '#';
			tmp += st[i / 2];
		}
		tmp += '#';
		tmp += '$';
		tmp += '\0';
		return 2 * len + 1;//返回转换后字符串的长度
	}
	string trans(string s)
		//init反操作
	{
		string str = "";
		int k = 0;
		for (int i = 0; i < s.length(); i += 1)
		{
			if (s[i] != '#' && s[i] != '$' && s[i] != '@')
				str += s[i];
		}
		return str;
	}
};

