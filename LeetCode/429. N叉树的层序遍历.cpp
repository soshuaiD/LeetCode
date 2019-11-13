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
////struct TreeNode {
////	int val;
////	TreeNode* left;
////	TreeNode* right;
////	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
////	
////};
//
//class Node {
//public:
//	int val;
//	vector<Node*> children;
//
//	Node() {}
//
//	Node(int _val, vector<Node*> _children) {
//		val = _val;
//		children = _children;
//	}
//};
//
//vector<vector<int>> levelOrder(Node* root) {
//	vector<vector<int>> ans;
//	if (!root)
//	{
//		return ans;
//	}
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		int width = q.size();
//		vector<int> layer;
//		for (int i = 0; i < width; i++)
//		{
//			Node* p = q.front();
//			q.pop();
//			layer.push_back(p->val);
//			for (auto child : p->children)
//			{
//				q.push(child);
//			}
//		}
//		ans.push_back(layer);
//	}
//	return ans;
//}
//
//int main()
//{
//	system("pause"); 
//}
