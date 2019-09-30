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
//};
//
//class BSTIterator {
//public:
//	BSTIterator(TreeNode* root) {
//		if (!root)
//			return;
//		while (root)
//		{
//			s.push(root);
//			root = root->left;
//		}
//	}
//
//	/** @return the next smallest number */
//	int next() {
//		TreeNode* node = s.top();
//		int ans = node->val;
//		s.pop();
//		if (node->right)
//		{
//			node = node->right;
//			while (node)
//			{
//				s.push(node);
//				node = node->left;
//			}
//		}
//		return ans;
//	}
//
//	/** @return whether we have a next smallest number */
//	bool hasNext() {
//		if (!s.empty())
//			return true;
//		else
//			return false;
//	}
//	stack<TreeNode*> s;
//};
//
//
//int main()
//{
//	system("pause"); 
//}
