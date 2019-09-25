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
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//vector<int> preorderTraversal(TreeNode* root) {
//	vector<int> ans;
//	if (!root)
//		return ans;
//
//	stack<TreeNode*> s;
//	s.push(root);
//	while (!s.empty())
//	{
//		TreeNode* node = s.top();
//		s.pop();
//
//		ans.push_back(node->val);
//
//		if (node->right)
//			s.push(node->right);
//		if (node->left)
//			s.push(node->left);
//	}
//	return ans;
//}
//
//int main()
//{
//	system("pause"); 
//}
