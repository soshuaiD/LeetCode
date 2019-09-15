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

vector<int> getNext(string p)
{
	vector<int> next;
	next.push_back(-1);
	int k = -1;
	int j = 0;
	while (j < p.length() - 1)
	{
		if (k == -1 || p[j] == p[k])
		{
			j++;
			k++;
			if (p[j] != p[k])
				next.push_back(k);
			else
				//不能出现p[j] = p[k],否则需要继续递归
				next.push_back(next[k]);
		}
		else
		{
			k = next[k];
		}
	}
	return next;
}

int strStr(string haystack, string needle) {
	if (needle.empty())
		return 0;
	vector<int> next = getNext(needle);
	int i = 0, j = 0;
	int hlen = haystack.length();
	int nlen = needle.length();
	while (i < hlen && j < nlen)
	{
		if (j == -1 || haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		else
			j = next[j];
	}
	if (j == nlen)
		return i - j;
	else
		return -1;
}