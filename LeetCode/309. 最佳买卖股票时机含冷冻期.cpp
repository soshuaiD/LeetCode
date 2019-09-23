//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//using namespace std;
//#pragma warning(disable:4996)
//
//int maxProfit(vector<int>& prices) {
//	int yesterday_0 = 0;
//	int before_0 = 0;
//	int yesterday_1 = INT_MIN;
//
//	int today_0 = 0;
//	int today_1 = 0;
//	for (int i = 0; i < prices.size(); i++)
//	{
//		today_0 = max(yesterday_0, yesterday_1 + prices[i]);
//		today_1 = max(yesterday_1, before_0 - prices[i]);
//		before_0 = yesterday_0;
//		yesterday_0 = today_0;
//		yesterday_1 = today_1;
//	}
//	return today_0;
//}
//
//int main()
//{
//	system("pause"); 
//}
