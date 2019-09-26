//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//using namespace std;
//#pragma warning(disable:4996)
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};

//vector<int> postorderTraversal(TreeNode* root) {
//	vector<int> ans;
//	stack <int> rev;
//	stack <TreeNode*> s;
//	if (!root)
//	{
//		return ans;
//	}
//
//	s.push(root);
//	while (!s.empty())
//	{
//		TreeNode* node = s.top();
//		s.pop();
//		rev.push(node->val);
//		if (node->left)
//			s.push(node->left);
//		if (node->right)
//			s.push(node->right);
//	}
//	while (!rev.empty())
//	{
//		int temp = rev.top();
//		rev.pop();
//		ans.push_back(temp);
//	}
//	return ans;
//}

//void Traversal(TreeNode* node, vector<int>& ans)
//{
//	if (!node)
//		return;
//	Traversal(node->left, ans);
//	Traversal(node->right, ans);
//	ans.push_back(node->val);
//	return;
//}
//
//vector<int> postorderTraversal(TreeNode* root) {
//	vector <int> ans;
//	Traversal(root, ans);
//	return ans;
//}

//int main()
//{
//	system("pause"); 
//}
