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
//vector<int> asteroidCollision(vector<int>& asteroids) {
//	
//	stack<int> s;
//	for (int i = 0; i < asteroids.size() ; i++)
//	{
//		//空栈，向右走，方向与前面一致，均可以放进去
//		if (s.empty() || asteroids[i] > 0|| asteroids[i]*s.top() > 0)
//		{
//			s.push(asteroids[i]);
//			continue;
//		}
//		
//		while (!s.empty() && abs(s.top()) < abs(asteroids[i]) && s.top() * asteroids[i] < 0)
//			s.pop();
//		if (!s.empty() && abs(s.top()) == abs(asteroids[i]) && s.top() * asteroids[i] < 0)
//		{
//			s.pop();
//			continue;
//		}
//		if (!s.empty() && abs(s.top()) > abs(asteroids[i]) && s.top() * asteroids[i] < 0)
//		{
//			continue;
//		}
//		s.push(asteroids[i]);
//	}
//
//	vector<int> ans(s.size(), 0);
//	while (!s.empty())
//	{
//		ans[s.size() - 1] = s.top();
//		s.pop();
//	}
//	return ans;
//}
//
//int main()
//{
//	vector<int> s = {-2,-2,1,-2};
//	vector<int> ans = asteroidCollision(s);
//	for (int i = 0; i < ans.size(); i++)
//	{
//		cout << ans[i] << endl;
//	}
//	system("pause"); 
//}
