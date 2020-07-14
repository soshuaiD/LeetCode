#include <algorithm>
#include <cassert>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

int cmp(const int& a, const int& b) {
	return a > b;
}

void wiggleSort(vector<int>& nums) {
	sort(nums.begin(), nums.end(), cmp);

	if (nums.size() % 2)
	{
		for (int i = 0; i < (nums.size()+1) / 2; i++) {
			nums.insert(nums.begin() + 2 * i, nums[nums.size() / 2 + i]);
			nums.erase(nums.begin() + (nums.size()-1) / 2 + i+1);
		}
	}
	else {
		for (int i = 0; i < nums.size() / 2; i++) {
			nums.insert(nums.begin() + 2 * i , nums[nums.size() / 2 + i]);
			nums.erase(nums.begin() + (nums.size()-1) / 2 + i+1);
		}
	}
}

int main() {
	vector<int> nums = {
		1,1,2,1,2,2,1};
	wiggleSort(nums);
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
}