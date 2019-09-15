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
	bool isPalindrome(int x) {
		if (x < 0)
			return false;

		stack <int> s1, temps;
		while (x != 0)
		{
			int byte = x % 10;
			s1.push(byte);
			temps.push(byte);
			x /= 10;
		}
		stack <int>s2;
		while (!(temps.empty()))
		{
			int num = temps.top();
			temps.pop();
			s2.push(num);
		}
		while (!s1.empty() && !s2.empty())
		{
			int num1 = s1.top();
			s1.pop();
			int num2 = s2.top();
			s2.pop();
			if (num1 != num2)
				return false;
		}
		return true;
	}
};
