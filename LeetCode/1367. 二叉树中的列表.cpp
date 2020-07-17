#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <queue>

using namespace std;
 
  struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool dfs(ListNode* head, TreeNode* root) {
	if (head == NULL)
	{
		return true;
	}
	if (root == NULL)
	{
		return false;
	}
	if (head->val != root->val)
	{
		return false;
	}
	else {
		return dfs(head->next, root->left) || dfs(head->next, root->right);
	}
}

bool isSubPath(ListNode* head, TreeNode* root) {
	queue<TreeNode*> q;
	q.push(root);

	while (!q.empty())
	{
		TreeNode* node = q.front();
		q.pop();
		if (node == NULL)
		{
			continue;
		}
		if (node->val == head->val)
		{
			return dfs(head, node);
		}
		q.push(node->left);
		q.push(node->right);
	}
	return false;
}

//ListNode* first;
//
//bool find(ListNode* head, TreeNode* root) {
//	if (!head)
//	{
//		return true;
//	}
//	if (!root) {
//		return false;
//	}
//	if (head->val!=root->val)
//	{
//		return find(first,root->left)|| find(first, root->right);
//	}
//	else {
//		return find(head->next, root->left) || find(head->next, root->right)||
//			find(head, root->left) || find(head, root->right);
//	}
//}
//
//bool isSubPath(ListNode* head, TreeNode* root) {
//	first = head;
//	return find(head, root);
//}