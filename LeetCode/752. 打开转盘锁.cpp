//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//#include <set>
//#include <unordered_set>
//using namespace std;
//#pragma warning(disable:4996)
//
////struct TreeNode {
////	int val;
////	TreeNode* left;
////	TreeNode* right;
////	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
////	
////};
//
//vector<string> generate(string str,int *vis)
//{
//	vector<string> children;
//	for (int i = 0; i < 4; i++)
//	{
//		string newstr1;
//		if (str[i]=='9')
//		{
//			newstr1 = str.substr(0, i) + '0' + str.substr(i + 1, 4);
//		}
//		else
//		{
//			char ch = str[i] + 1;
//			newstr1 = str.substr(0, i) + ch + str.substr(i + 1, 4);
//		}
//		int num1 = atoi(newstr1.c_str());
//		if (!vis[num1])
//		{
//			vis[num1] = 1;
//			children.push_back(newstr1);
//		}
//		
//
//		string newstr2;
//		if (str[i] == '0')
//		{
//			newstr2 = str.substr(0, i) + '9' + str.substr(i + 1, 4);
//		}
//		else
//		{
//			char ch = str[i] - 1;
//			newstr2 = str.substr(0, i) + ch + str.substr(i + 1, 4);
//		}
//		int num2 = atoi(newstr2.c_str());
//		if (!vis[num2])
//		{
//			vis[num2] = 1;
//			children.push_back(newstr2);
//		}
//	}
//	return children;
//}
//
//int vis[10000] = { 0 };
//int openLock(vector<string>& deadends, string target) {
//	
//	if (count(deadends.begin(),deadends.end(),"0000"))
//	{
//		return -1;
//	}
//
//	
//	vis[0] = 1;
//	queue<string> q;
//	q.push("0000");
//	int ans = 0;
//	while (!q.empty())
//	{
//		int width = q.size();
//		
//		for (int i = 0; i <width; i++)
//		{
//			string str = q.front();
//			if (str==target)
//			{
//				return ans;
//			}
//			q.pop();
//			vector<string> children = generate(str, vis);
//			for (auto child:children)
//			{
//				int num = atoi(child.c_str());
//
//				if (!count(deadends.begin(), deadends.end(), child))
//				{
//					q.push(child);
//					vis[num] = 1;
//				}
//			}
//		}
//		ans++;
//	}
//	return -1;
//}
//
//int main()
//{
//	vector<string> deadends = { "0201","0101","0102","1212","2002" };
//	return openLock(deadends, "0202");
//	system("pause"); 
//}
