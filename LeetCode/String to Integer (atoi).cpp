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
	int myAtoi(string str) {
		int state = 1;
		char op = '+';
		int num = 0;
		int bit = 0;
		for (int i = 0; i < str.length(); i++)
		{
			switch (state)
			{
			case 1:
			{
				if (str[i] == ' ')
				{
					continue;
				}
				else if (str[i] == '+')
				{
					state = 2;
					op = '+';
				}
				else if (str[i] == '-')
				{
					state = 2;
					op = '-';
				}
				else if (check_num(str[i]))
				{
					num = str[i] - '0';
					state = 3;
				}
				else
				{
					state = 404;
					goto k;
				}
				break;
			}
			case 2:
			{
				if (check_num(str[i]))
				{
					bit = str[i] - '0';
					if (op == '+')
						num = num * 10 + bit;
					else
						num = num * 10 - bit;
					state = 3;
				}
				else
				{
					state = 404;
					goto k;
				}
				break;
			}
			case 3:
			{
				if (check_num(str[i]))
				{
					bit = str[i] - '0';
					if (op == '+')
					{
						if ((num > INT_MAX / 10) || ((INT_MAX - 10 * num) < bit))
						{
							num = INT_MAX;
							goto k;
						}
						num = num * 10 + bit;
					}

					else
					{
						if ((num < (INT_MIN / 10)))
						{
							num = INT_MIN;
							goto k;
						}
						if ((10 * num - INT_MIN - 1) < bit - 1)
						{
							num = INT_MIN;
							goto k;
						}
						num = num * 10 - bit;
					}

				}
				else
				{
					goto k;
				}
				break;
			}
			}
		}

	k:
		if (state == 404 || state == 1 || state == 2)
			return 0;
		else
			return  num;

	}

	static bool check_num(char ch)
	{
		if (ch >= '0' && ch <= '9')
			return true;
		else
			return false;
	}
};
