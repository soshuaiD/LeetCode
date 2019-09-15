#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode head(-1);
		ListNode* h = &head;
		ListNode* newp = h;
		while (l1 != NULL && l2 != NULL)
		{
			if (l1->val <= l2->val)
			{
				newp->next = l1;
				l1 = l1->next;
				newp = newp->next;
			}
			else 
			{
				newp->next = l2;
				l2 = l2->next;
				newp = newp->next;
			}
		}
		if (l1 != NULL)
		{
			newp->next = l1;
		}
		if (l2 != NULL)
		{
			newp->next = l2;
		}
		return h->next;
	}
};