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

bool find132pattern(vector<int>& nums) {
	int length = nums.size();
	if (length < 3)
		return false;

	stack<int> three;
	int second = INT_MIN;
	three.push(nums[length - 1]);

	for (int i = length-2; i >=0 ; i--)
	{
		if (nums[i] < second)
			return true;

		else
		{
			while (!three.empty() && nums[i] > three.top())
			{
				second = max(second, three.top());
				three.pop();
			}
			three.push(nums[i]);
		}
	}
	return false;
}


int main()
{
	system("pause"); 
}
