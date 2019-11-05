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
//vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
//	vector<int> indegree(n, 0);
//	vector<vector<int>> graph(n, vector<int>());
//	vector<int> ans;
//	if (n==0)
//	{
//		return ans;
//	}
//	if (n==1)
//	{
//		ans.push_back(0);
//		return ans;
//	}
//
//	for (auto edge:edges )
//	{
//		graph[edge[0]].push_back(edge[1]);
//		graph[edge[1]].push_back(edge[0]);
//		indegree[edge[0]]++;
//		indegree[edge[1]]++;
//	}
//
//	queue<int> q;
//	int rst = n;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (indegree[i]==1)
//		{
//			q.push(i);
//		}
//	}
//
//	while (rst!=1&&rst!=2)
//	{
//		int length = q.size();
//		rst -= length;
//		for (int i = 0; i < length; i++)
//		{
//			int now = q.front();
//			q.pop();
//			for ( auto vertex:graph[now])
//			{
//				indegree[vertex]--;
//				if (indegree[vertex]==1)
//				{
//					q.push(vertex);
//				}
//			}
//		}
//	}
//
//	while (!q.empty())
//	{
//		ans.push_back(q.front());
//		q.pop();
//	}
//	return ans;
//}
//
//int main()
//{
//	system("pause"); 
//}
