#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#pragma warning(disable:4996)
using namespace std;

class Solution {
public:
	int maxArea(vector<int>& height) {
		int head = 0;
		int tail = height.size() - 1;
		int maxsize = 0;
		while (head != tail)
		{
			int tempmax = 0;
			if (height[head] > height[tail])
			{
				tempmax = height[tail] * (tail - head);
				tail--;
			}
			else
			{
				tempmax = height[head] * (tail - head);
				head++;
			}
			maxsize = max(maxsize, tempmax);
		}
		return maxsize;
	}
};