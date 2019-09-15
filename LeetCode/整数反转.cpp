#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
using namespace std;

class Solution {
public:
	int reverse(int x) {
		int ans = 0;
		int op = x;
		while (x != 0)
		{
			int bit = x % 10;
			x /= 10;
			if (ans > (pow(2,31)-1) / 10)
			{
				ans = 0;
				break;
			}
			ans *= 10;
			ans += bit;
		}
		if (op < 0)
			ans *= -1;
		return ans;
	}
};