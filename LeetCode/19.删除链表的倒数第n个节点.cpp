#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		int counter = 0;
		ListNode h(-1);
		ListNode* dummy = &h;
		dummy->next = head;
		ListNode* p = dummy;
		ListNode* result = dummy;
		while (p!= NULL)
		{
			counter++;
			p = p->next;
			if (counter == n + 1)
				break;
		}

		while (p != NULL)
		{
			p = p->next;
			result = result->next;
		}
		if (dummy == result)
			head = head->next;
		else
			result->next = (result->next)->next;

		return head;
	}
};