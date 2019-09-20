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

int Min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return a;
	else if (b <= a && b <= c)
		return b;
	else 
		return c;

}

int maximalSquare(vector<vector<char>>& matrix) {
	int R = matrix.size();
	if (R == 0)
		return 0;
	int C = matrix[0].size();

	int maxlen = 0;
	vector<vector<int>> dp(R, vector<int>(C, 0));
	for (int i = 0; i < C; i++)
	{
		if (matrix[0][i] == '1')
		{
			dp[0][i] = 1;
			maxlen = 1;
		}
			
	}
	for (int i = 1; i < R; i++)
	{
		if (matrix[i][0] == '1')
		{
			dp[i][0] = 1;
			maxlen = 1;
		}
			
	}

	for (int i = 1; i < R; i++)
	{
		for (int j = 1; j < C; j++)
		{
			if (matrix[i][j]=='1')
			{
				dp[i][j] = Min(dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]) + 1;
				maxlen = max(maxlen, dp[i][j]);
			}
		}
	}
	return maxlen * maxlen;
}

int main()
{
	system("pause"); 
}
