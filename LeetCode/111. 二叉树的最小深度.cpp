//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//#include <set>
//using namespace std;
//#pragma warning(disable:4996)
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//	
//};
//
//int minDepth(TreeNode* root) {
//	if (root==NULL)
//	{
//		return 0;
//	}
//	queue<TreeNode*> q;
//	int depth = 0;
//	q.push(root);
//	while (!q.empty())
//	{
//		int width = q.size();
//		depth++;
//		for (int i = 0; i < width; i++)
//		{
//			TreeNode* node = q.front();
//			q.pop();
//			if (node->left == NULL && node->right == NULL)
//			{
//				return depth;
//			}
//			if (node->left != NULL)
//				q.push(node->left);
//			if (node->right != NULL)
//				q.push(node->right);
//		}
//	}
//}
//
//int main()
//{
//	system("pause"); 
//}
