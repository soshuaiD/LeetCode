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
//static int dp[101][101];
//
//
//int uniquePaths(int m, int n) {
//	if (m <= 0 || n <= 0)
//		return 0;
//	else if (m == 1 && n == 1)
//		return 1;
//	else if (m == 2 && n == 2)
//		return 2;
//	else if ((m == 2 && n == 3) || (m == 3 && n == 2))
//		return 3;
//	if (dp[m][n - 1] == 0)
//		dp[m][n - 1] = uniquePaths(m, n - 1);
//	if (dp[m - 1][n] == 0)
//		dp[m - 1][n] = uniquePaths(m - 1, n);
//	dp[m][n] = dp[m][n - 1] + dp[m - 1][n];
//	return dp[m][n];
//
//}