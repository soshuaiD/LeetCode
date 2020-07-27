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

vector<int> ans;
void traverse(int label) {
	if (label==1)
	{
		ans.push_back(1);
		return;
	}
	int depth = int(log2(label));
	int sum = pow(2, depth) + pow(2, depth - 1) - 1;
	ans.push_back(label);
	traverse(sum - label / 2);
}

vector<int> pathInZigZagTree(int label) {
	traverse(label);
	reverse(ans.begin(), ans.end());
	return ans;
}