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
//		//iΪ����
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
		//�����Գ����� T~O(n^2) S~O(1)
//		string longeststr = "";
//		int maxlen = 0;
//		if (s == "")
//			return longeststr;
//		for (int i = 0; i < 2 * s.length() - 1; i++)
//		{
//			//�������ַ�
//			if (i % 2 == 0)
//			{
//				int i1 = i / 2;
//				for (int j = 0; j < s.length(); j++)
//				{
//					//Խ����
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
//			//ż�����ַ�
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
		//Manacher�㷨
		string str;
		memset(Len, 0, sizeof(Len));
		int len = INIT(s);
		int mx = 0, ans = 0, po = 0;
		//mxΪ��ǰ����Ļ��Ĵ����ұ��ַ������ֵ
		//poΪ�����ҵ��ַ�������
		for (int i = 1; i <= len; i++)
		{
			if (mx > i)
				//��Len[j]��mx-i��ȡС
				Len[i] = min(mx - i, Len[2 * po - i]);
			else
				//i>=mx,Ҫ��ͷ��ʼƥ��
				Len[i] = 1;

			//����ƥ���ϣ�len++
			while (tmp[i - Len[i]] == tmp[i + Len[i]])
				Len[i]++;

			//����¼���Ļ��Ĵ��Ҷ˵�λ�ô���mx������
			if ((Len[i] + i) > mx)
			{
				mx = Len[i] + i;
				po = i;
			}

			//����ans��str
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
		return 2 * len + 1;//����ת�����ַ����ĳ���
	}
	string trans(string s)
		//init������
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

