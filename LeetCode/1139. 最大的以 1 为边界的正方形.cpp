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

int largest1BorderedSquare(vector<vector<int>>& grid) {
	int line = grid.size();
	if (line == 0)
	{
		return 0;
	}
	int column = grid[0].size();

	vector<vector<vector<int>>> dp(line, vector<vector<int>>(column, vector<int>(2, 0)));

	int maxlen = 0;
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (grid[i][j] == 1)
			{
				if (i == 0 && j == 0)
				{
					dp[i][j][0] = 1;
					dp[i][j][1] = 1;
					maxlen = max(maxlen, 1);
				}
				else if (i == 0 && j != 0) {
					dp[i][j][0] += dp[i][j - 1][0] + 1;
					dp[i][j][1] = 1;
					maxlen = max(maxlen, 1);
				}
				else if (i != 0 && j == 0) {
					dp[i][j][0] = 1;
					dp[i][j][1] += dp[i - 1][j][1] + 1;
					maxlen = max(maxlen, 1);
				}
				else {
					dp[i][j][0] += dp[i][j - 1][0] + 1;
					dp[i][j][1] += dp[i - 1][j][1] + 1;

					int len = min(dp[i][j][0], dp[i][j][1]);
					while (len)
					{
						if (dp[i - len + 1][j][0] >= len && dp[i][j - len + 1][1] >= len) {
							break;
						}
						len--;
					}
					maxlen = max(maxlen, len);
				}

			}
		}
	}
	return maxlen * maxlen;
}