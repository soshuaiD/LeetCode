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

int sumSubarrayMins(vector<int>& A) {
	vector<int> left(A.size(), -1);
	vector<int> right(A.size(), A.size());

	stack<int> s1;
	for (int i = 0; i < A.size(); i++)
	{
		while (!s1.empty() && A[s1.top()] > A[i])
		{
			s1.pop();
		}
		left[i] = s1.empty() ? (-1) : s1.top();
		s1.push(i);
	}

	stack<int> s2;
	for (int i = A.size()-1; i>=0; i--)
	{
		while (!s2.empty()&&A[s2.top()]>=A[i])
		{
			s2.pop();
		}
		right[i] = s2.empty() ? A.size() : s2.top();
		s2.push(i);
	}

	const int mod = 1000000000 + 7;

	int ans = 0;
	for (int i = 0; i < A.size(); i++)
	{
		ans += A[i] * (i - left[i]) * (right[i] - i);
		ans %= mod;
	}
	return ans;
}

int main()
{
	system("pause"); 
}
