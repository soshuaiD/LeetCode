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


bool recur(TreeNode* A, TreeNode* B) {
	if (B == nullptr)
	{
		return true;
	}
	if (A == nullptr)
	{
		return false;
	}
	return (A->val == B->val) && recur(A->left, B->left) && recur(A->right, B->right);
}

bool isSubStructure(TreeNode* A, TreeNode* B) {

	if (A == NULL || B == NULL)
	{
		return false;
	}
	return recur(A, B) || isSubStructure(A->left, B) || isSubStructure(A->right, B);
}
