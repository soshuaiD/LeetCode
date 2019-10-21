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
////struct TreeNode {
////	int val;
////	TreeNode* left;
////	TreeNode* right;
////	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
////	
////};
//bool comp(const int& x, const int& y)
//{
//	return x > y;
//}
//int leastInterval(vector<char>& tasks, int n) {
//	if (tasks.size()<=1)
//	{
//		return tasks.size();
//	}
//	vector<int> times(26, 0);
//	for (int i = 0; i < tasks.size(); i++)
//	{
//		times[tasks[i] - 'A']++;
//	}
//	sort(times.begin(), times.end(), comp);
//	
//	int part1 = (times[0] - 1) * (n + 1);
//	int part2 = 0;
//
//	for (int i = 1; i < 26; i++)
//	{
//		if (times[i] == times[0])
//			part2++;
//		else
//		{
//			break;
//		}
//	}
//	if (part1+part2<tasks.size())
//	{
//		return tasks.size();
//	}
//	return part1 + part2;
//}
//
//int main()
//{
//	vector<char> ch = { 'A','A','A','B','B','C' };
//	cout<<leastInterval(ch, 2);
//	system("pause"); 
//}
