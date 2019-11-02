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
//struct position{
//	int x;
//	int y;
//	position(int x, int y) :x(x), y(y) {};
//};
//
//int numIslands(vector<vector<char>>& grid) {
//	vector<position> dp = { position(-1,0),position(1,0),position(0,1),position(0,-1) };
//	int ans = 0;
//	if (grid.empty())
//	{
//		return ans;
//	}
//	queue<position> q;
//	int R = grid.size();
//	int C = grid[0].size();
//	vector<vector<int>> vis(R, vector<int>(C,0));
//	for (int i = 0; i < R; i++)
//	{
//		for (int j = 0; j < C; j++)
//		{
//			if (grid[i][j]=='1'&&vis[i][j]==0)
//			{
//				ans++;
//				vis[i][j] = 1;
//				q.push(position(i, j));
//				while (!q.empty())
//				{
//					position pos = q.front();
//					q.pop();
//					for (int dir = 0; dir < 4; dir++)
//					{
//						position temp(pos.x + dp[dir].x, pos.y + dp[dir].y);
//						if (temp.x < 0 || temp.x >= R || temp.y < 0 || temp.y >= C || vis[temp.x][temp.y])
//						{
//							continue;
//						}
//
//						if (grid[temp.x][temp.y] == '1' && vis[temp.x][temp.y] == 0)
//						{
//							q.push(temp);
//						}
//						vis[temp.x][temp.y] = 1;
//					}
//				}
//			}
//		}
//	}
//	return ans;
//}
//
//int main()
//{
//	vector<vector<char>> grid{ {'1','1','1','1','0'} };
//	cout << numIslands(grid) << endl;
//	system("pause"); 
//}
