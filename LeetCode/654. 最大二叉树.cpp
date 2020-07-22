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

//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
//	if (nums.size()==0)
//	{
//		return nullptr;
//	}
//	TreeNode* root = new TreeNode(INT_MIN);
//	int index = -1;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		if (nums[i]>root->val)
//		{
//			root->val = nums[i];
//			index = i;
//		}
//	}
//	vector<int> leftNums(nums.begin(), nums.begin() + index);
//	root->left = constructMaximumBinaryTree(leftNums);
//	vector<int> rightNums(nums.begin() + index + 1, nums.end());
//	root->right = constructMaximumBinaryTree(rightNums);
//
//	return root;
//
//}
//TreeNode* dfs(vector<int>& nums, int left, int right) {
//	if (left > right)
//	{
//		return nullptr;
//	}
//	TreeNode* root = new TreeNode(INT_MIN);
//	int index = -1;
//	for (int i = left; i <= right; i++)
//	{
//		if (nums[i]>root->val)
//		{
//			root->val = nums[i];
//			index = i;
//		}
//	}
//	root->left = dfs(nums,left,index-1);
//	root->right = dfs(nums, index + 1, right);
//	return root;
//}
//
//TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
//	return dfs(nums, 0, nums.size() - 1);
//}