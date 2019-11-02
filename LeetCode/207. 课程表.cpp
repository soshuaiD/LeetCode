#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#include <set>
#include <unordered_set>
using namespace std;
#pragma warning(disable:4996)

//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//	
//};

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
	vector<vector<int>> graph(numCourses, vector<int>(numCourses));
	if (prerequisites.empty())
	{
		return true;
	}
	for (auto pre:prerequisites )
	{
		graph[pre[1]][pre[0]] = 1;
	}

	
	stack<int> s;

	for (int i = 0; i < numCourses; i++)
	{
		for (int j = 0; j < numCourses; j++)
		{
			
			vector<int> vis(numCourses, 0);
			vis[i] = 1;
			if (graph[i][j]==0)
			{
				continue;
			}
			if (graph[i][j] == 1)
			{
				vis[j] = 1;
				s.push(j);
				while (!s.empty())
				{
					int now = s.top();
					s.pop();
					for (int i1 = 0; i1 < numCourses; i1++)
					{
						if (graph[now][i1] == 0)
						{
							continue;
						}
						if (graph[now][i1] == 1 && vis[i1] == 0)
						{
							s.push(i1);
						}
						else if (graph[now][i1] == 1 && vis[i1] == 1)
							return false;
					}
				}
			}
		}
	}
	return true;
}

int main()
{
	system("pause"); 
}


