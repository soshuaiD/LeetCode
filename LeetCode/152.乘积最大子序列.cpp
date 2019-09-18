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

int maxProduct(vector<int>& nums) {
	int imin = 1, imax = 1;
	int Max = INT_MIN;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] < 0)
		{
			int temp = imax;
			imax = imin;
			imin = temp;
		}
		imin = min(imin * nums[i], nums[i]);
		imax = max(imax * nums[i], nums[i]);
		Max = max(Max, imax);
	}
	return Max;

}

int main()
{
	system("pause"); 
}
