#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> T;
		map<int, int> mymap;

		for (int i = 0; i < size(nums); i++)
		{
			map<int, int>::iterator it = mymap.find(target - nums[i]);
			if (it == mymap.end())
				mymap.insert(make_pair(nums[i], i));
			else
			{
				if (i > it->second)
				{
					T.push_back(it->second);
					T.push_back(i);
				}
				else {
					T.push_back(i);
					T.push_back(it->second);
				}

				goto k;
			}

		}

	k:return T;
	}
};