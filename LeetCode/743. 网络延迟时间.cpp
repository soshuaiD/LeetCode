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
//int networkDelayTime(vector<vector<int>>& times, int N, int K) {
//	vector<int> vis(N + 1, 0);
//	vector<vector<long>> dis(N + 1, vector<long>(N + 1, INT_MAX));
//
//	for (int i = 1; i < N+1; i++)
//	{
//		dis[i][i] = 0;
//	}
//	for (auto edge:times )
//	{
//		dis[edge[0]][edge[1]] = edge[2];
//	}
//
//	vis[K] = 1;
//	//剩余N-1个点，循环N-1次
//	for (int i = 1; i < N; i++)
//	{
//		int minindex = 0;
//		int mindis = INT_MAX;
//
//		//找到最短距离
//		for (int j = 1; j < N+1; j++)
//		{
//			if (!vis[j]&&mindis>dis[K][j])
//			{
//				mindis = dis[K][j];
//				minindex = j;
//			}
//		}
//		vis[minindex] = 1;
//
//		//更新最短距离，每一个dis[K][j]都是候选距离
//		for (int j = 1; j < N+1; j++)
//		{
//			dis[K][j] = min(dis[K][j], dis[K][minindex] + dis[minindex][j]);
//		}
//	}
//
//	int maxdis = 0;
//	for (int i = 1; i < N+1; i++)
//	{
//		if (maxdis<dis[K][i])
//		{
//			maxdis = dis[K][i];
//		}
//	}
//	
//	return maxdis == INT_MAX ? -1 : maxdis;
//}
//
//int main()
//{
//	system("pause"); 
//}
