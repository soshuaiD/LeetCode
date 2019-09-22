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
//int numSquares(int n) {
//	vector<int> dp(n+1, 1);
//	dp[0] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		//最大，i个1
//		dp[i] = i;
//		for (int j = 1; j*j <=i; j++)
//		{
//			dp[i] = min(dp[i], dp[i - j * j] + 1);
//		}
//	}
//	return dp.back();
//}
//
//int main()
//{
//	cout << numSquares(11) << endl;
//	system("pause"); 
//}
