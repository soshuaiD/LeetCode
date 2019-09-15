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
	int lengthOfLongestSubstring(string s) {
		vector<char> v;
		int maxlen = 0;
		int len = 0;
		for (int i = 0; i < s.length(); i++)
		{
			vector<char>::iterator result = find(v.begin(), v.end(), s[i]);
			if (result != v.end())
			{
				v.erase(v.begin(), result + 1);
			}
			v.push_back(s[i]);
			len = v.size();
			if (len > maxlen)
				maxlen = len;
		}
		return maxlen;
	}
};