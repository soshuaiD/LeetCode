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
////bool isSymmetric(TreeNode* root) {
////	if (root == NULL)
////	{
////		return false;
////	}
////	queue<TreeNode*> s1;
////	queue<TreeNode*> s2;
////	s1.push(root);
////	s2.push(root);
////	while (!s1.empty()&&!s2.empty())
////	{
////		TreeNode* node1 = s1.front();
////		s1.pop();
////		TreeNode* node2 = s2.front();
////		s2.pop();
////		if (node1 == NULL && node2 == NULL)
////			continue;
////		if (node1 == NULL || node2 == NULL)
////			return false;
////		if (node1->val!=node2->val)
////		{
////			return false;
////		}
////		s1.push(node1->left);
////		s1.push(node1->right);
////		s2.push(node2->right);
////		s2.push(node2->left);
////	}
////	return true;
////}
//
//bool Symmetric(TreeNode* t1, TreeNode* t2) {
//	if (t1==NULL&&t2==NULL)
//	{
//		return true;
//	}
//	if (t1 == NULL|| t2 == NULL)
//	{
//		return false;
//	}
//	return (t1->val == t2->val) && Symmetric(t1->left, t2->right) && Symmetric(t1->right, t2->left);
//}
//
//bool isSymmetric(TreeNode* root) {
//	return Symmetric(root, root);
//}
//
//int main()
//{
//	system("pause"); 
//}
