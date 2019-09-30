#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#include <set>
using namespace std;
#pragma warning(disable:4996)

bool isValidSerialization(string preorder) {
	int length = preorder.length();
	if (length == 0)
		return false;
	if (preorder[length - 1] != '#')
		return false;
	if (length == 1 && preorder[0] == '#')
		return true;

	stack<int> s;
	for (int i = 0; i < length; i++)
	{
		if (preorder[i] == '#')
		{
			if (s.empty())
			{
				if (i!=length-1)
				{
					return false;
				}
				continue;
			}
			else
			{
				if (s.top() == 0)
				{
					s.pop();
					if (!s.empty() && s.top() == 1)
					{
						s.pop();
						i--;
						continue;
					}
					else
						return false;
				}
				else
				{
					s.push(0);
				}
			}
		}
		else if (preorder[i] == ',')
			continue;
		else
		{
			while (preorder[i] >= '0' && preorder[i] <= '9')
			{
				i++;
			}
			s.push(1);
			i--;
		}
	}
	if (s.empty())
		return true;
	else
		return false;
}

int main()
{
	cout << isValidSerialization("1,#,#,#,#") << endl;
	system("pause"); 
}
