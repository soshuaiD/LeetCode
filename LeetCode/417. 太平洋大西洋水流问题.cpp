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
//vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
//	vector < vector<int>> ans;
//	if (matrix.size()==0)
//	{
//		return ans;
//	}
//	int bottom = matrix.size();
//	int bound = matrix[0].size();
//
//	queue<pair<int, int>> q;
//	vector < vector<int>> status(bottom, vector<int>(bound, 0));
//	for (int i = 0; i < bottom; i++)
//	{
//		q.push({ i,0 });
//		status[i][0] |= 1;
//		q.push({ i,bound - 1 });
//		status[i][bound - 1] |= 2;
//	}
//	for (int i = 0; i < bound; i++)
//	{
//		q.push({ 0,i });
//		status[0][i] |= 1;
//		q.push({ bottom - 1,i });
//		status[bottom - 1][i] |= 2;
//	}
//	vector<vector<int>> dir = { {-1,0},{1,0},{0,1},{0,-1} };
//	while (!q.empty())
//	{
//		auto pos = q.front();
//		q.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int r = pos.first + dir[i][0];
//			int b = pos.second + dir[i][1];
//			if (r>=0&&r<bottom&&b>=0&&b<bound&&matrix[r][b]>=matrix[pos.first][pos.second])
//			{
//				if (status[r][b] != status[pos.first][pos.second])
//				{
//					status[r][b] |= status[pos.first][pos.second];
//					q.push({ r, b });
//				}
//			}
//		}
//	}
//	for (int i = 0; i < bottom; i++)
//	{
//		for (int j = 0; j < bound; j++)
//		{
//			if (status[i][j]==3)
//			{
//				ans.push_back({ i,j });
//			}
//		}
//	}
//	return ans;
//}
//
//int main()
//{
//	vector<vector<int>> matrix = { {1,1},{1,1},{1,1} };
//	pacificAtlantic(matrix);
//	system("pause"); 
//}
