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
//int small(int a, int b)
//{
//	return a < b ? a : b;
//
//}
//
//int minPathSum(vector<vector<int>>& grid) {
//	int m = grid[0].size();
//	int n = grid.size();
//	
//	for (int i = 1; i < m; i++)
//	{
//		grid[0][i] += grid[0][i - 1];
//	}
//	for (int i = 1; i < n; i++)
//	{
//		grid[i][0] += grid[i - 1][0];
//	}
//
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 1; j < m; j++)
//		{
//			grid[i][j] += small(grid[i - 1][j], grid[i][j - 1]);
//		}
//	}
//
//	return grid[n - 1][m - 1];
//}
//
//int main()
//{
//	system("pause");
//}
