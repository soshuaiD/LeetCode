//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//#include <set>
//#include <unordered_set>
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
//int findBottomLeftValue(TreeNode* root) {
//	int ans = -1;
//	queue<TreeNode*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		int width = q.size();
//		TreeNode* node = q.front();
//		q.pop();
//		ans = node->val;
//		if (node->left)
//		{
//			q.push(node->left);
//		}
//		if (node->right)
//		{
//			q.push(node->right);
//		}
//		for (int i = 1; i < width; i++)
//		{
//			node = q.front();
//			q.pop();
//			if (node->left)
//			{
//				q.push(node->left);
//			}
//			if (node->right)
//			{
//				q.push(node->right);
//			}
//		}
//	}
//	return ans;
//}
//
//int main()
//{
//	system("pause"); 
//}
