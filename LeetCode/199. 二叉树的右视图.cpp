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
//vector<int> rightSideView(TreeNode* root) {
//	vector<int> ans;
//	if (!root)
//		return ans;
//	queue<TreeNode*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		int width = q.size();
//		bool choose = false;
//		for (int i = 0; i < width; i++)
//		{
//			TreeNode* node = q.front();
//			q.pop();
//			if (!choose)
//			{
//				choose = !choose;
//				ans.push_back(node->val);
//			}
//			if (node->right)
//			{
//				q.push(node->right);
//			}
//			if (node->left)
//			{
//				q.push(node->left);
//			}
//		}
//	}
//	return ans;
//}
//
//int main()
//{
//
//	system("pause"); 
//}
