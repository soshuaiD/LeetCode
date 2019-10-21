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
//vector<vector<int>> levelOrderBottom(TreeNode* root) {
//	vector<vector<int>> ans;
//	if (!root)
//	{
//		return ans;
//	}
//	queue<TreeNode*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		int width = q.size();
//		vector<int> v;
//		for (int i = 0; i < width; i++)
//		{
//			TreeNode* node = q.front();
//			q.pop();
//			v.push_back(node->val);
//			if (node->left)
//			{
//				q.push(node->left);
//			}
//			if (node->right)
//			{
//				q.push(node->right);
//			}
//		}
//		ans.push_back(v);
//	}
//	reverse(ans.begin(), ans.end());
//	return ans;
//
//}
//
//int main()
//{
//	system("pause"); 
//}
