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
//bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//	stack<int> push_stack;
//	stack<int> pop_stack;
//	int p = 0;
//	for (int i = 0; i < pushed.size(); i++)
//	{
//		push_stack.push(pushed[i]);
//		while (!push_stack.empty()&&push_stack.top()==popped[p])
//		{
//			p++;
//			pop_stack.push(push_stack.top());
//			push_stack.pop();
//		}
//	}
//	while (!push_stack.empty())
//	{
//		pop_stack.push(push_stack.top());
//		push_stack.pop();
//	}
//
//	for (int i = pop_stack.size()-1; i >=0; i--)
//	{
//		if (pop_stack.top()!=popped[i])
//		{
//			return false;
//		}
//		pop_stack.pop();
//	}
//	return true;
//}
//
//int main()
//{
//	system("pause"); 
//}
