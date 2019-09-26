//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//#include <set>
//
//using namespace std;
//#pragma warning(disable:4996)
//
//set<string> op = { "+","-","*","/" };
//
//int evalRPN(vector<string>& tokens) {
//	stack<int> num;
//	for (int i = 0; i < tokens.size(); i++)
//	{
//		if (op.count(tokens[i]))
//		{
//			int second = num.top();
//			num.pop();
//			int first = num.top();
//			num.pop();
//			if (tokens[i] == "+")
//				num.push(first + second);
//			else if (tokens[i] == "-")
//				num.push(first - second);
//			else if (tokens[i] == "*")
//				num.push(first * second);
//			else if (tokens[i] == "/")
//				num.push(first / second);
//		}
//		else
//		{
//			num.push(atoi(tokens[i].c_str()));
//		}
//	}
//	return num.top();
//}
//
//int main()
//{
//	system("pause"); 
//}
