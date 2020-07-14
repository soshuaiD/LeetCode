//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int cmp(const int& a, const int& b) {
//	return a > b;
//}
//
//void wiggleSort(vector<int>& nums) {
//	sort(nums.begin(), nums.end(), cmp);
//
//	if (nums.size() % 2)
//	{
//		for (int i = 0; i < (nums.size() + 1) / 2; i++) {
//			nums.insert(nums.begin() + 2 * i, nums[nums.size() / 2 + i]);
//			nums.erase(nums.begin() + (nums.size() - 1) / 2 + i + 1);
//		}
//	}
//	else {
//		for (int i = 0; i < nums.size() / 2; i++) {
//			nums.insert(nums.begin() + 2 * i, nums[nums.size() / 2 + i]);
//			nums.erase(nums.begin() + (nums.size() - 1) / 2 + i + 1);
//		}
//	}
//}