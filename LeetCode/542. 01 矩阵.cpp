//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//#include <set>
//#include <unordered_set>
//using namespace std;
//#pragma warning(disable:4996)
//
////struct TreeNode {
////	int val;
////	TreeNode* left;
////	TreeNode* right;
////	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
////	
////};
//
//vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
//	int rows = matrix.size();
//	int cols = matrix[0].size();
//	vector<vector<int>> ans(rows, vector<int>(cols, INT_MAX));
//
//	queue < pair<int, int > > q;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (matrix[i][j] == 0)
//			{
//				ans[i][j] = 0;
//				q.push({ i,j });
//			}
//		}
//	}
//
//	vector<vector<int>> dirs = { {-1,0},{1,0},{0,-1},{0,1} };
//	while (!q.empty())
//	{
//		pair<int, int> pos = q.front();
//		q.pop();
//		for (auto dir : dirs)
//		{
//			int x = pos.first + dir[0];
//			int y = pos.second + dir[1];
//			if (x >= 0 && x < rows && y >= 0 && y < cols)
//			{
//				if (ans[x][y] - 1 > ans[pos.first][pos.second])
//				{
//					ans[x][y] = ans[pos.first][pos.second] + 1;
//					q.push({ x,y });
//				}
//			}
//		}
//	}
//	return ans;
//}
//
//int main()
//{
//	system("pause"); 
//}
