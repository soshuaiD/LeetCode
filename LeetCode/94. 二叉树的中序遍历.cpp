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

vector<int> inorderTraversal(TreeNode* root) {
	vector<int> ans;

	if (!root)
		return ans;

	stack<TreeNode*> s;
	TreeNode* curr = root;

	while (curr||!s.empty())
	{
		while (curr)
		{
			s.push(curr);
			curr = curr->left;
		}
		if (!s.empty())
		{
			ans.push_back(s.top()->val);
			curr = s.top()->right;
			s.pop();
		}
	}
	return ans;
}