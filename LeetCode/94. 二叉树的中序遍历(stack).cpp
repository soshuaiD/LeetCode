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
// struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  };
// 
//class Solution {
//public:
//	vector<int> inorderTraversal(TreeNode* root) {
//		stack<TreeNode*> s;
//		vector<int> ans;
//
//		if (!root)
//			return ans;
//
//		TreeNode* cur = root;
//		s.push(cur);
//		while (!cur||!s.empty())
//		{
//			//直接找到最左边
//			while (cur)
//			{
//				s.push(cur);
//				cur = cur->left;
//			}
//			//弹出最左边，再对右子树进行相同操作
//			if (!s.empty())
//			{
//				ans.push_back(s.top()->val);
//				cur = s.top()->right;
//				s.pop();
//			}
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//	system("pause"); 
//}
