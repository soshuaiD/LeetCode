#include <algorithm>
#include <cassert>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

int waysToChange(int n) {
	vector<int> value = { 0, 1,5,10,25 };
	vector<vector<int>> dp(value.size(), vector<int>(n + 1, 0));
	for (int i = 0; i < value.size(); i++)
	{
		dp[i][0] = 1;
	}
	for (int i = 1; i < value.size(); i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j < value[i]) {
				dp[i][j] = dp[i - 1][j];
			}
			else {
				dp[i][j] = (dp[i - 1][j] + dp[i][j - value[i]]) % 1000000007;
			}
		}
	}
	return dp[value.size() - 1][n];
}