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
//int calPoints(vector<string>& ops) {
//
//	stack<int> s;
//	for (int i = 0; i < ops.size(); i++)
//	{
//		
//		if(ops[i]=="C")
//		{
//			s.pop();
//		}
//		else if (ops[i]=="D")
//		{
//			s.push(2 * s.top());
//		}
//		else if (ops[i]=="+")
//		{
//			int first = s.top();
//			s.pop();
//			int score = first + s.top();
//			s.push(first);
//			s.push(score);
//		}
//		else 
//		{
//			s.push(atoi(ops[i].c_str()));
//		}
//	}
//	int ans = 0;
//	while (!s.empty())
//	{
//		ans += s.top();
//		s.pop();
//	}
//	return ans;
//}
//
//int main()
//{
//	vector<string> s = { "-21"," - 66","39"," + "," + " };
//	cout << calPoints(s) << endl;
//	system("pause"); 
//}
