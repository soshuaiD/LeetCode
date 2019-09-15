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
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int l1 = nums1.size();
		int l2 = nums2.size();
		int k = (l1 + l2 + 1) / 2;
		if (l1 > l2)
			return findMedianSortedArrays(nums2, nums1);
		int left = 0;
		int right = l1;
		int i = 0, j = 0;
		while (left < right)
		{
			i = (left + right) / 2;
			j = k - i;
			if (nums1[i] < nums2[j - 1])
				left = i + 1;
			else
				right = i;
		}
		int m1 = left;
		int m2 = k - left;
		int max1 = max(m1 <= 0 ? INT_MIN : nums1[m1 - 1], m2 <= 0 ? INT_MIN : nums2[m2 - 1]);
		int min1 = min(m1 >= l1 ? INT_MAX : nums1[m1], m2 >= l2 ? INT_MAX : nums2[m2]);

		if ((l1 + l2) % 2 == 1)
			return max1;
		else
			return (double)(max1 + min1) / 2;

	}
};