动态规划
空间O(n)
line[j] = triangle[i][j] + min(line[j], line[j + 1])，i表示当前自下向上到达第i层。
自下向上，不用考虑越界问题，比自上向下方便点儿