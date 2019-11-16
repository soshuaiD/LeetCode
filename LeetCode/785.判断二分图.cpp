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
//bool isBipartite(vector<vector<int>>& graph) {
//	int size = graph.size();
//	vector<int> color(size, 0);
//	queue<int> q;
//	for (int i = 0; i < size; i++)
//	{
//		if (color[i]!=0)
//		{
//			continue;
//		}
//
//		color[i] = 1;
//		q.push(i);
//		while (!q.empty())
//		{
//			int now = q.front();
//			q.pop();
//			for (auto i:graph[now] )
//			{
//				if (color[i]==0)
//				{
//					color[i] = -color[now];
//					q.push(i);
//				}
//				else if (color[i]== color[now])
//				{
//					return false;
//				}
//			}
//		}
//
//	}
//	return true;
//}
//
//int main()
//{
//	vector<vector<int>> graph = { {} };
//	isBipartite(graph);
//	system("pause"); 
//}
