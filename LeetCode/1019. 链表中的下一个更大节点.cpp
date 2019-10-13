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
//
//
//struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
// };
// 
//
//vector<int> nextLargerNodes(ListNode* head) {
//	if (head==NULL)
//	{
//		return {};
//	}
//
//	stack<int> s;
//	vector<int> ans;
//	while (head!=NULL)
//	{
//		ans.push_back(head->val);
//		head = head->next;
//	}
//
//	for (int i = ans.size()-1; i >= 0; i--)
//	{
//		int cur = ans[i];
//		while (!s.empty()&&s.top()<=ans[i])
//		{
//			s.pop();
//		}
//		ans[i] = s.empty() ? 0 : s.top();
//		s.push(cur);
//	}
//	return ans;
//}
//
//int main()
//{
//	system("pause"); 
//}
