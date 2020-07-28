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

queue<TreeNode*> s;
vector<TreeNode*> ans;

void traverse(TreeNode* root, vector<int>& to_delete) {
	if (!count(to_delete.begin(), to_delete.end(),root->val))
	{
		ans.push_back(root);
	}
	else {
		if (root->left != nullptr)
		{
			s.push(root->left);
		}
		if (root->right != nullptr)
		{
			s.push(root->right);
		}
		return;
	}
	queue<TreeNode*> subTree;
	subTree.push(root);
	while (!subTree.empty())
	{
		TreeNode* node = subTree.front();
		TreeNode* left = node->left;
		TreeNode* right = node->right;
		subTree.pop();

		if (left !=nullptr)
		{
			if (count(to_delete.begin(), to_delete.end(), left->val))
			{
				if (left->left!=nullptr)
				{
					s.push(left->left);
				}
				if (left->right != nullptr)
				{
					s.push(left->right);
				}
				node->left = nullptr;
			}
			else {
				subTree.push(left);
			}
		}
		if (right != nullptr)
		{
			if (count(to_delete.begin(), to_delete.end(), right->val))
			{
				if (right->left != nullptr)
				{
					s.push(right->left);
				}
				if (right->right != nullptr)
				{
					s.push(right->right);
				}
				node->right = nullptr;
			}
			else {
				subTree.push(right);
			}
		}
	}
	return;
}

vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
	if (root == nullptr)
	{
		return ans;
	}
	
	s.push(root);
	while (!s.empty())
	{
		traverse(s.front(), to_delete);
		s.pop();
	}
	return ans;
}