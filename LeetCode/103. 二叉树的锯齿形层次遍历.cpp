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
//	
//};
//
//enum {
//	ToLeft=0,
//	ToRight
//};
//
// vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//	 vector<vector<int>> ans;
//	 if (!root)
//		 return ans;
//
//	 bool flag = true;
//	 stack< TreeNode*> s1;
//	 s1.push(root);
//	 stack< TreeNode*> s2;
//	 int sequence = ToRight;
//	 while (!s1.empty())
//	 {
//		 vector<int> line;
//		 while (!s1.empty())
//		 {
//			 TreeNode* node = s1.top();
//			 s1.pop();
//			 line.push_back(node->val);
//			 if (sequence == ToLeft)
//			 {
//				 if (node->right != NULL)
//					 s2.push(node->right);
//				 if (node->left != NULL)
//					 s2.push(node->left);
//			 }
//			 else
//			 {
//				 if (node->left != NULL)
//					 s2.push(node->left);
//				 if (node->right != NULL)
//					 s2.push(node->right);
//			 }
//		 }
//		 sequence = !sequence;
//		 ans.push_back(line);
//
//		 s1.swap(s2);
//
//	 }
//	 return ans;
// }
//
//int main()
//{
//	system("pause"); 
//}
