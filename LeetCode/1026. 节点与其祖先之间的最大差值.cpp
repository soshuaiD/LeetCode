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

tuple<int, int> maxTuple(tuple<int, int>t1, tuple<int, int>t2, tuple<int, int>t3) {
	int value1 = get<1>(t1) - get<0>(t1);
	int value2 = get<1>(t2) - get<0>(t2);
	int value3 = get<1>(t3) - get<0>(t3);
	if (value1>=value2&&value1>=value3)
	{
		return t1;
	}
	if (value2>= value1 && value2 >= value3)
	{
		return t2;
	}
	if (value3 >= value1 && value3 >= value2)
	{
		return t3;
	}

}

tuple<int, int> dfs(TreeNode* root, int maxNum, int minNum) {
	int value = root->val;
	maxNum = value > maxNum ? value : maxNum;
	minNum = value < minNum ? value : minNum;
	tuple<int, int> maxMinLeft(0,0);
	tuple<int, int> maxMinRight(0,0);
	if (root->left)
	{
		maxMinLeft = dfs(root->left, maxNum, minNum);
	}
	if (root->right)
	{
		maxMinRight = dfs(root->right, maxNum, minNum);
	}
	return maxTuple(tuple<int, int>(minNum, maxNum), maxMinLeft, maxMinRight);
}

int maxAncestorDiff(TreeNode* root) {
	tuple<int, int> maxMin =  dfs(root, root->val, root->val);
	return  get<1>(maxMin) - get<0>(maxMin);
}