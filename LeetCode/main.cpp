#include <algorithm>
#include <cassert>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* sortList(ListNode* head) {
    if (!head || !head->next)
    {
        return head;
    }

    ListNode* fast = head->next, * slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    ListNode* tmp = slow->next;
    slow->next = NULL;

    ListNode* left = sortList(head);
    ListNode* right = sortList(tmp);

    ListNode* p = new ListNode(0), * h = p;
    while (left && right)
    {
        if (left->val > right->val)
        {
            p->next = right;
            right = right->next;
        }
        else {
            p->next = left;
            left = left->next;
        }
        p = p->next;
    }
    p->next = left ? left : right;
    return h->next;
}

int main() {
    ListNode* p1 = new ListNode(3);
    ListNode* p2 = new ListNode(2);
    p1->next = p2;
    ListNode* p3 = new ListNode(1);
    p2->next = p3;
    sortList(p1);
}