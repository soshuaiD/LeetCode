#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#pragma warning(disable:4996)
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> preorderTraversal(TreeNode* root) {
	vector <int> pre;
	if (!root)
		return pre;

	stack <TreeNode*> s;
	s.push(root);
	while (!s.empty())
	{
		TreeNode* node = s.top();
		pre.push_back(node->val);
		s.pop();

		if (node->right)
		{
			s.push(node->right);
		}

		if (node->left)
		{
			s.push(node->left);
		}
	}
	return pre;
}