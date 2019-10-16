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
////void level(queue<TreeNode*> q, vector<vector<int>>& ans) {
////	queue<TreeNode*> q1;
////	vector<int> v;
////	while (!q.empty())
////	{
////		TreeNode* node = q.front();
////		q.pop();
////		v.push_back(node->val);
////		if (node->left!=NULL)
////		{
////			q1.push(node->left);
////		}
////		if (node->right != NULL)
////		{
////			q1.push(node->right);
////		}
////	}
////	ans.push_back(v);
////	if (!q1.empty())
////	{
////		level(q1, ans);
////	}
////}
////
////vector<vector<int>> levelOrder(TreeNode* root) {
////	vector<vector<int>> ans;
////	queue<TreeNode *> q;
////	if (root == NULL)
////		return ans;
////	q.push(root);
////	level(q, ans);
////	return ans;
////}
//
//vector<vector<int>> levelOrder(TreeNode* root) {
//	vector<vector<int>> ans;
//	queue<TreeNode *> q;
//	if (root == NULL)
//		return ans;
//	q.push(root);
//	while (!q.empty())
//	{
//		vector<int> v;
//		int width = q.size();
//		for (int i = 0; i < width; i++)
//		{
//			TreeNode* node = q.front();
//			q.pop();
//			v.push_back(node->val);
//			if (node->left!=NULL)
//			{
//				q.push(node->left);
//			}
//			if (node->right != NULL)
//			{
//				q.push(node->right);
//			}
//		}
//		ans.push_back(v);
//	}
//	return ans;
//}
//
//int main()
//{
//	system("pause"); 
//}
