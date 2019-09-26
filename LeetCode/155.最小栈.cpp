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
//class MinStack {
//public:
//	/** initialize your data structure here. */
//	MinStack() {
//
//	}
//
//	void push(int x) {
//		s.push(x);
//		if (!minValue.empty() || x < minValue.top())
//			minValue.push(x);
//		else
//		{
//			minValue.push(minValue.top());
//		}
//	}
//
//	void pop() {
//		s.pop();
//		minValue.pop();
//	}
//
//	int top() {
//		return s.top();
//	}
//
//	int getMin() {
//		return minValue.top();
//	}
//
//	stack<int> s;
//	stack<int> minValue;
//
//};
//
//int main()
//{
//	system("pause"); 
//}
