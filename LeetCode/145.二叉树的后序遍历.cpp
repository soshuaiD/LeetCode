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

vector<int> postorderTraversal(TreeNode* root) {
	vector<int> ans;
	if (!root)
	{
		return ans;
	}

	stack<TreeNode*> s;
	s.push(root);

	while (!s.empty())
	{
		TreeNode* curr = s.top();
		s.pop();

		ans.insert(ans.begin(),curr->val );

		if (curr->left)
		{
			s.push(curr->left);
		}

		if (curr->right)
		{
			s.push(curr->right);
		}
	}
	return ans;
}