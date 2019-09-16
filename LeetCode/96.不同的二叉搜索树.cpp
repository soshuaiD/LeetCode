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
//int numTrees(int n) {
//	vector<int> dp;
//	dp.push_back(1);
//	dp.push_back(1);
//	for (int i = 2; i <=n; i++)
//	{
//		int result = 0;
//		for (int j = 0; j <i; j++)
//		{
//			result += dp[i - 1 - j] * dp[j];
//		}
//		dp.push_back(result);
//	}
//	return dp[n];
//}
//
//
//int main()
//{
//	system("pause"); 
//}
