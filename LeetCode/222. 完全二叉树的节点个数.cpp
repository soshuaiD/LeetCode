#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int countNodes(TreeNode* root) {
	if (root == nullptr)
	{
		return 0;
	}
	queue<TreeNode*> q;
	q.push(root);
	int nodesNum = 0;
	while (!q.empty())
	{

		int width = q.size();
		nodesNum += width;
		for (int i = 0; i < width; i++)
		{
			TreeNode* node = q.front();
			q.pop();
			if (node->left)
			{
				q.push(node->left);
			}
			if (node->right)
			{
				q.push(node->right);
			}
		}
	}
	return nodesNum;
}