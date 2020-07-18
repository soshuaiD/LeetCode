//#include <iostream>
//#include <vector>
//#include <map>
//#include <string>
//
//using namespace std;
//
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//map<string, int> m;
//vector<TreeNode*> ans;
//
//string serialize(TreeNode* node) {
//	if (node == NULL)
//	{
//		return "#";
//	}
//	string s = to_string(node->val) + "," + serialize(node->left) + "," + serialize(node->right);
//	auto it = m.find(s);
//	if (it!=m.end())
//	{
//		it->second = it->second + 1;
//		if (it->second == 2)
//		{
//			ans.push_back(node);
//		}
//	}
//	else {
//		m.insert(make_pair(s, 1));
//	}
//	return s;
//}
//
//vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
//	serialize(root);
//	return ans;
//}