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
//int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//	int m = obstacleGrid[0].size();
//	int n = obstacleGrid.size();
//	if (obstacleGrid[0][0] == 1 || obstacleGrid[n - 1][m - 1] == 1)
//		return 0;
//
//	long dp[101][101];
//	dp[0][0] = 1;
//	for (int i = 1; i < m; i++)
//	{
//		if (obstacleGrid[0][i] == 0)
//			dp[0][i] = 1;
//		else
//			while (i < m)
//			{
//				dp[0][i] = 0;
//				i++;
//			}
//	}
//
//	for (int i = 1; i < n; i++)
//	{
//		if (obstacleGrid[i][0] == 0)
//			dp[i][0] = 1;
//		else
//			while (i < n)
//			{
//				dp[i][0] = 0;
//				i++;
//			}
//	}
//
//	for (int i = 1; i < m; i++)
//	{
//		for (int j = 1; j < n; j++)
//		{
//			if (obstacleGrid[j][i] == 1)
//				dp[j][i] = 0;
//			else
//				dp[j][i] = dp[j - 1][i] + dp[j][i - 1];
//		}
//	}
//	return dp[n - 1][m - 1];
//}