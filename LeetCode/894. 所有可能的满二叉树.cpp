//#include <iostream>
//#include <string>
//#include <sstream>
//#include <stack>
//#include <queue>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//vector<TreeNode*> memo[21];
//vector<TreeNode*> allPossibleFBT(int N) {
//	vector<TreeNode*> ans;
//	if (N%2==0)
//	{
//		return  ans;
//	}
//	if (N==1)
//	{
//		TreeNode* root = new TreeNode(0);
//		return {root};
//	}
//	if (!memo[N].empty())
//	{
//		return memo[N];
//	}
//	
//	
//	for (int i = 1; i <= N/2; i+=2)
//	{
//		vector<TreeNode*> leftSubTree = allPossibleFBT(i);
//		vector<TreeNode*> rightSubTree = allPossibleFBT(N-1-i); 
//		for (int j = 0; j < leftSubTree.size(); j++)
//		{
//			for (int k = 0; k < rightSubTree.size(); k++)
//			{
//				TreeNode* root1 =  new TreeNode(0);
//				root1->left = leftSubTree[j];
//				root1->right = rightSubTree[k];
//				ans.push_back(root1);
//
//				if (i != (N - 1) / 2) {
//					TreeNode* root2 = new TreeNode(0);
//					root2->left = rightSubTree[k];
//					root2->right = leftSubTree[j];
//					ans.push_back(root2);
//				}
//				
//			}
//		}
//	}
//	memo[N] = ans;
//	return ans;
//}
//
//int main() {
//	allPossibleFBT(3);
//}