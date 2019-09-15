#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#include <algorithm>
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

int KMP(char* s, char* p)
{
	int i = 0, j = 0;
	int slen = strlen(s);
	int plen = strlen(p);
	while (i < slen && j < plen)
	{
		if (j == -1 || s[i] == p[j])
		{
			i++;
			j++;
		}
		else
		{
			j = next[j];
		}
	}
	if (j == plen)
		return i - j;
	else
		return -1;
}