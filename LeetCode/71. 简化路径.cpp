#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
using namespace std;
#pragma warning(disable:4996)

string simplifyPath(string path) {
	stack<string> simplified;
	if (path[path.size() - 1] != '/')
		path += '/';

	int len = 0;
	for (int i = 0; i < path.size(); i++)
	{
		if (path[i] == '/')
		{
			if(len!=0)
			{
				string temp = path.substr(i - len, len);
				if (temp == "."){}
				else if (temp == "..")
				{
					if (!simplified.empty())
					{
						simplified.pop();
					}
				}
				else
				{
					simplified.push(temp);
				}

				len = 0;
			}
			
		}
		else
		{
			len++;
		}
	}
	if (simplified.empty())
		return "/";
	string res;
	while (!simplified.empty())
	{
		res = '/' + simplified.top() + res;
		simplified.pop();
	}
	return res;
}

int main()
{
	cout << simplifyPath("/a/../../b/../c//.//") << endl;
	system("pause"); 
}
