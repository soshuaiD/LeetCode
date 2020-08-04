#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <tuple>
#pragma warning(disable:4996)
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int maxDepth = 0;
TreeNode* ancestor = nullptr;

int dfs(TreeNode* root, int depth) {
	if (root == nullptr)
	{
		return depth - 1;
	}
	int leftDepth = dfs(root->left, depth + 1);
	int rightDepth = dfs(root->right, depth + 1);

	maxDepth = max(maxDepth, max(leftDepth, rightDepth));
	if (leftDepth == maxDepth && rightDepth == maxDepth)
	{
		ancestor = root;
	}

	return max(leftDepth, rightDepth);
}

TreeNode* subtreeWithAllDeepest(TreeNode* root) {
	dfs(root, 1);
	return ancestor;
}