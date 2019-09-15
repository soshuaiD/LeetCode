//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//#include <algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//
//struct pos
//{
//	int x;
//	int y;
//	pos(int x = 0,int y = 0):x(x), y(y){
//
//	}
//};
//
//void solve(vector<vector<char>>& board) {
//	int n = board.size();
//	if (n == 0)
//		return;
//	int m = board[0].size();
//	if (m == 0)
//		return;
//
//	for (int i = 0; i < m; i++)
//	{
//		if (board[0][i] == 'O')
//		{
//			stack<pos> s;
//			s.push(pos(0, i));
//			while (!s.empty())
//			{
//				int x = s.top().x;
//				int y = s.top().y;
//				board[x][y] = '#';
//				s.pop();
//
//				if (x - 1 >= 0 && board[x - 1][y] == 'O')
//					s.push(pos(x - 1, y));
//				if (x + 1 <= m - 1 && board[x + 1][y] == 'O')
//					s.push(pos(x + 1, y));
//				if (y - 1 >= 0 && board[x][y - 1] == 'O')
//					s.push(pos(x, y - 1));
//				if (y + 1 <= n - 1 && board[x][y + 1] == 'O')
//					s.push(pos(x, y + 1));
//			}
//		}
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		if (board[n-1][i] == 'O')
//		{
//			stack<pos> s;
//			s.push(pos(n-1, i));
//			while (!s.empty())
//			{
//				int x = s.top().x;
//				int y = s.top().y;
//				board[x][y] = '#';
//				s.pop();
//
//				if (x - 1 >= 0 && board[x - 1][y] == 'O')
//					s.push(pos(x - 1, y));
//				if (x + 1 <= m - 1 && board[x + 1][y] == 'O')
//					s.push(pos(x + 1, y));
//				if (y - 1 >= 0 && board[x][y - 1] == 'O')
//					s.push(pos(x, y - 1));
//				if (y + 1 <= n - 1 && board[x][y + 1] == 'O')
//					s.push(pos(x, y + 1));
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (board[i][0] == 'O')
//		{
//			board[i][0] = '#';
//			stack<pos> s;
//			s.push(pos(i, 0));
//			while (!s.empty())
//			{
//				int x = s.top().x;
//				int y = s.top().y;
//				board[x][y] = '#';
//				s.pop();
//
//				if (x - 1 >= 0 && board[x - 1][y] == 'O')
//					s.push(pos(x - 1, y));
//				if (x + 1 <= m - 1 && board[x + 1][y] == 'O')
//					s.push(pos(x + 1, y));
//				if (y - 1 >= 0 && board[x][y - 1] == 'O')
//					s.push(pos(x, y - 1));
//				if (y + 1 <= n - 1 && board[x][y + 1] == 'O')
//					s.push(pos(x, y + 1));
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (board[i][m-1] == 'O')
//		{
//			stack<pos> s;
//			s.push(pos(i, m - 1));
//			while (!s.empty())
//			{
//				int x = s.top().x;
//				int y = s.top().y;
//				board[x][y] = '#';
//				s.pop();
//
//				if (x - 1 >= 0 && board[x - 1][y] == 'O')
//					s.push(pos(x - 1, y));
//				if (x + 1 <= m - 1 && board[x + 1][y] == 'O')
//					s.push(pos(x + 1, y));
//				if (y - 1 >= 0 && board[x][y - 1] == 'O')
//					s.push(pos(x, y - 1));
//				if (y + 1 <= n - 1 && board[x][y + 1] == 'O')
//					s.push(pos(x, y + 1));
//			}
//		}
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (board[i][j] == 'O')
//				board[i][j] = 'X';
//			else if (board[i][j] == '#')
//				board[i][j] = 'O';
//		}
//	}
//}
//
