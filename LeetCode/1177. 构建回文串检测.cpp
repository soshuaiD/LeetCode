#include <iostream>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
	int length = s.length();
	vector<vector<int>> dp(length+1, vector<int>(26, 0));

	for (int i = 1; i <= length; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (j == s[i-1] - 'a')
			{
				dp[i][j] =dp[i-1][j]+1 ;
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	vector<bool> ans(queries.size(), true);
	for (int i = 0; i < queries.size(); i++)
	{
		vector<int> query = queries[i];
		int start = query[0], end = query[1], k = query[2];
		int diff = 0;
		for (int j = 0; j < 26; j++)
		{
			if ((dp[end+1][j]-dp[start][j])%2)
			{
				diff++;
			}
		}
		if (diff/2>k)
		{
			ans[i] = false;
		}
	}
	return ans;
}

//int main() {
//	vector<vector<int>> v = { {0, 4, 1} };
//	canMakePaliQueries("abcda", v);
//}