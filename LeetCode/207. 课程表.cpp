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
//bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//	vector<int> indegree(numCourses,0);
//	vector<vector<int>> graph(numCourses, vector<int>(numCourses, 0));
//	if (prerequisites.empty())
//	{
//		return true;
//	}
//	for (auto pre:prerequisites )
//	{
//		graph[pre[1]][pre[0]] = 1;
//		indegree[pre[0]]++;
//	}
//
//	queue<int> q;
//	int CourseNum = numCourses;
//	for (int i = 0; i < numCourses; i++)
//	{
//		if (indegree[i]==0)
//		{
//			q.push(i);
//			CourseNum--;
//		}
//	}
//	
//	while (!q.empty())
//	{
//		int pre = q.front();
//		q.pop();
//		for (int i=0;i<numCourses;i++)
//		{
//			if (graph[pre][i]==1)
//			{
//				
//				if ((--indegree[i])==0)
//				{
//					q.push(i);
//					CourseNum--;
//				}
//			}
//			else
//			{
//				continue;
//			}
//		}
//	}
//	if (CourseNum==0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	vector<vector<int>> v = { {0,1} };
//	cout << canFinish(2, v) << endl;
//	system("pause"); 
//}
//
//
