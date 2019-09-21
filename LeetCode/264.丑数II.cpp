#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
using namespace std;
#pragma warning(disable:4996)

int nthUglyNumber(int n) {
	vector<int> dp;
	int pointer1 = 0, pointer2 = 0, pointer3 = 0;
	dp.push_back(1);
	for (int i = 1; i < n; i++)
	{
		int data = min(dp[pointer1] * 2, min(dp[pointer2] * 3, dp[pointer3] * 5));
		dp.push_back(data);
		//并列if避免重复 6=3*2=2*3
		if (data== dp[pointer1] * 2)
		{
			pointer1++;
		}
		if (data == dp[pointer2] * 3)
		{
			pointer2++;
		}
		if (data == dp[pointer3] * 5)
		{
			pointer3++;
		}
	}
	return dp.back();
}

int main()
{
	for (int i = 1; i < 30; i++)
	{
		cout << nthUglyNumber(i) << endl;
	}
	
	system("pause"); 
}
