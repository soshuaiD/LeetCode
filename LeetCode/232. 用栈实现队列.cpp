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
//class MyQueue {
//public:
//	/** Initialize your data structure here. */
//	MyQueue() {
//
//	}
//
//	/** Push element x to the back of queue. */
//	void push(int x) {
//		s.push(x);
//	}
//
//	/** Removes the element from in front of queue and returns that element. */
//	int pop() {
//		stack<int> temp;
//		while (!s.empty())
//		{
//			temp.push(s.top());
//			s.pop();
//		}
//
//		int ans = temp.top();
//		temp.pop();
//
//		while (!temp.empty())
//		{
//			s.push(temp.top());
//			temp.pop();
//		}
//
//		return ans;
//	}
//
//	/** Get the front element. */
//	int peek() {
//		stack<int> temp;
//		while (!s.empty())
//		{
//			temp.push(s.top());
//			s.pop();
//		}
//
//		int ans = temp.top();
//
//		while (!temp.empty())
//		{
//			s.push(temp.top());
//			temp.pop();
//		}
//
//		return ans;
//	}
//
//	/** Returns whether the queue is empty. */
//	bool empty() {
//		return s.empty();
//	}
//	stack<int> s;
//};
//
//
//
//
//int main()
//{
//	system("pause"); 
//}
