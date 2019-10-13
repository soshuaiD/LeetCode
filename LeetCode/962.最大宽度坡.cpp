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
//int maxWidthRamp(vector<int>& A) {
//	int ans = 0;
//	stack<int> s;
//	for (int i = 0; i < A.size(); i++)
//	{
//		if (s.empty()||A[s.top()]>A[i])
//		{
//			s.push(i);
//		}
//	}
//
//	for (int i = A.size()-1; i >ans ; i--)
//	{
//		while (!s.empty()&&A[s.top()]<=A[i])
//		{
//			ans = max(ans, i - s.top());
//			s.pop();
//		}
//	}
//	return ans;
//}
//
//int main()
//{
//	vector<int> A = { 5,4,3,2,1,100 };
//	cout << maxWidthRamp(A) << endl;
//	system("pause"); 
//}
