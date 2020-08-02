#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <set>
#pragma warning(disable:4996)
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

map<TreeNode*, TreeNode*> p;

void dfs(TreeNode* root, TreeNode* parent) {
	if (root == nullptr)
	{
		return;
	}
	p.insert(pair<TreeNode*, TreeNode*>(root, parent));
	dfs(root->left, root);
	dfs(root->right, root);
}

vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
	vector<int> ans;
	dfs(root, nullptr);

	set<TreeNode*> seen ;
	queue<TreeNode*> q;
	q.push(nullptr);
	q.push(target);
	seen.insert(target);
	seen.insert(nullptr);
	int dist = 0;
	while (!q.empty())
	{
		TreeNode* node = q.front();
		q.pop();
		if (node == nullptr)
		{
			if (dist == K)
			{
				while (!q.empty()) {
					TreeNode* n = q.front();
					q.pop();
					ans.push_back(n->val);
				}
				return ans;
			}
			q.push(nullptr);
			dist++;
		}
		else {
			TreeNode* left = node->left;
			if (seen.find(left) == seen.end())
			{
				q.push(left);
				seen.insert(left);
			}
			TreeNode* right = node->right;
			if (seen.find(right) == seen.end())
			{
				q.push(right);
				seen.insert(right);
			}
			TreeNode* parent = p.find(node)->second;
			if (seen.find(parent) == seen.end())
			{
				q.push(parent);
				seen.insert(parent);
			}
		}
	}
	return ans;
}