#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int carry = 0;
		ListNode* ansp = new ListNode(-1);
		ListNode* p = ansp;
		ListNode* p1 = l1;
		ListNode* p2 = l2;

		while (p1 != NULL || p2 != NULL)
		{
			int val1 = (p1 == NULL) ? 0 : p1->val;
			int val2 = (p2 == NULL) ? 0 : p2->val;
				
			ListNode* newp = new ListNode(0);
			newp->val = val1 + val2 + carry;
			carry = 0;                            //½øÎ»
			if (newp->val >= 10)
			{
				newp->val -= 10;
				carry = 1;
			}
			p->next = newp;
			p = newp;
				
			if (p1 != NULL)
				p1 = p1->next;
			if (p2 != NULL)
				p2 = p2->next;
		}
		
		if (carry == 1)
		{
			ListNode* newp = new ListNode(1);
			p->next = newp;
		}
		return ansp->next;
	}
};