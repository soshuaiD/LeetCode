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
//bool wordBreak(string s, vector<string>& wordDict) {
//	vector<int> dp;
//	dp.push_back(1);
//
//	for (int i = 0; i < s.size(); i++)
//	{
//		dp.push_back(0);
//		for (int j = 0; j < wordDict.size(); j++)
//		{
//			int length = wordDict[j].size();
//			if (i + 1 >= length)
//				dp[i + 1] = dp[i + 1] || ((!wordDict[j].compare(s.substr(i + 1 - length, length)) && dp[i + 1 - length]));
//		}
//	}
//	return dp[s.size()];
//}
//
//int main()
//{
//	vector<string> wordDict = { "leet", "code", "sand", "and", "cat" };
//	cout << wordBreak("leetcode", wordDict) << endl;
//	system("pause"); 
//}
