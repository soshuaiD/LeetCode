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
//class NumMatrix {
//public:
//	NumMatrix(vector<vector<int>>& matrix) {
//		int R = matrix.size();
//		int C = 0;
//		if (R != 0)
//			C = matrix[0].size();
//		vector<vector<int>> dp(R + 1, vector<int>(C + 1, 0));
//		for (int i = 0; i < R; i++)
//		{
//			for (int j = 0; j < C; j++)
//			{
//				dp[i + 1][j + 1] = dp[i][j + 1] + dp[i + 1][j] - dp[i][j] + matrix[i][j];
//			}
//		}
//		dp.swap(res);
//	}
//
//	int sumRegion(int row1, int col1, int row2, int col2) {
//		return res[row2 + 1][col2 + 1] - res[row2 + 1][col1] - res[row1][col2 + 1] + res[row1][col1];
//	}
//	vector<vector<int>> res;
//};
//
//int main()
//{
//	system("pause"); 
//}
