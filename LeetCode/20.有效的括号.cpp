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
	bool isValid(string s) {
		stack <char> bracket;
		char ch;
		for (int i = 0; i < s.length(); i++)
		{
			ch = s[i];
			if (ch == '(' || ch == '{' || ch == '[')
				bracket.push(ch);
			else
			{
				if (bracket.size() > 0)
				{
					if (ch == ')' && bracket.top() == '(')
						bracket.pop();
					else if (ch == '}' && bracket.top() == '{')
						bracket.pop();
					else if (ch == ']' && bracket.top() == '[')
						bracket.pop();
					else
						return false;
				}
				else
					return false;
			}
		}
		if (bracket.size() == 0)
			return true;
		else
			return false;
	}
};