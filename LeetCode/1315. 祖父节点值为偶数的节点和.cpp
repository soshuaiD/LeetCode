//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//#include <algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//int sumEvenGrandparent(TreeNode* root) {
//	int sum = 0;
//	if (root == nullptr)
//	{
//		return sum;
//	}
//
//	if (root->val%2==0)
//	{
//		if (root->left!=nullptr&& root->left->left != nullptr)
//		{
//			sum += root->left->left->val;
//		}
//
//		if (root->left != nullptr && root->left->right != nullptr)
//		{
//			sum += root->left->right->val;
//		}
//
//		if (root->right != nullptr && root->right->left != nullptr)
//		{
//			sum += root->right->left->val;
//		}
//
//		if (root->right != nullptr && root->right->right != nullptr)
//		{
//			sum += root->right->right->val;
//		}
//	}
//	sum += sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);
//	return sum;
//}