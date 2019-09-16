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
//int minimumTotal(vector<vector<int>>& triangle) {
//
//	int R = triangle.size();
//	if (R == 0)
//		return 0;
//	vector<int> dp;
//	for (int i = 0; i < triangle[R-1].size(); i++)
//	{
//		dp.push_back(triangle[R - 1][i]);
//	}
//
//	for (int i = R - 2; i >= 0; i--)
//	{
//		for (int j = 0; j < triangle[i].size(); j++)
//		{
//			dp[j] = min(dp[j], dp[j + 1]);
//			dp[j] += triangle[i][j];
//		}
//	}
//	return dp[0];
//
//}
//
//
//int main()
//{
//	system("pause"); 
//}
