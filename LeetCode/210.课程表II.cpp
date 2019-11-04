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
//
//vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
//	vector<int> ans;
//	if (numCourses==0)
//	{
//		return ans;
//	}
//	vector<vector<int>> graph(numCourses, vector<int>(numCourses,0));
//	vector<int> indegree(numCourses, 0);
//
//	for (auto pre : prerequisites)
//	{
//		graph[pre[1]][pre[0]] = 1;
//		indegree[pre[0]]++;
//	}
//
//	int num = 0;
//	queue<int> q;
//	for (int i = 0; i < numCourses; i++)
//	{
//		if (indegree[i] == 0)
//		{
//			num++;
//			q.push(i);
//			ans.push_back(i);
//		}
//	}
//
//	while (!q.empty())
//	{
//		int now = q.front();
//		q.pop();
//		for (int i=0;i<numCourses;i++)
//		{
//			if (graph[now][i]==1)
//			{
//				indegree[i]--;
//				if (indegree[i]==0)
//				{
//					q.push(i);
//					ans.push_back(i);
//					num++;
//				}
//			}
//			
//		}
//	}
//	if(num==numCourses)
//		return ans;
//	else
//	{
//		return {};
//	}
//}
//
//int main()
//{
//	vector<vector<int>> v = { {0,1} };
//	findOrder(2, v);
//	system("pause"); 
//}
