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
//vector<int> largestValues(TreeNode* root) {
//	vector<int> ans;
//	queue<TreeNode*> q;
//	if (!root)
//	{
//		return ans;
//	}
//	q.push(root);
//	while (!q.empty())
//	{
//		int maxi = INT_MIN;
//		int width = q.size();
//		for (int i = 0; i < width; i++)
//		{
//			TreeNode* node = q.front();
//			q.pop();
//			maxi = max(maxi, node->val);
//			if (node->left)
//			{
//				q.push(node->left);
//			}
//			if (node->right)
//			{
//				q.push(node->right);
//			}
//		}
//		ans.push_back(maxi);
//	}
//	return ans;
//}
//
//int main()
//{
//	system("pause"); 
//}
