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
//
//typedef struct {
//	int id;
//	int rating;
//	int vegan;
//	int price;
//	int distance;
//} RestaurantS;
//
//int comp(const RestaurantS& a, const RestaurantS& b) {
//	if (a.rating != b.rating) {
//		return a.rating < b.rating;
//	}
//	return a.id < b.id;
//}
//
//vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
//	vector<RestaurantS> R;
//	for (int i = 0; i < restaurants.size(); i++)
//	{
//		if (veganFriendly == false)
//		{
//			if (restaurants[i][3] <= maxPrice && restaurants[i][4] <= maxDistance)
//			{
//				RestaurantS r;
//				r.id = restaurants[i][0];
//				r.rating = restaurants[i][1];
//				r.vegan = restaurants[i][2];
//				r.price = restaurants[i][3];
//				r.distance = restaurants[i][4];
//				R.push_back(r);
//			}
//		}
//		else if (restaurants[i][2] == true) {
//			if (restaurants[i][3] <= maxPrice && restaurants[i][4] <= maxDistance) {
//				RestaurantS r;
//				r.id = restaurants[i][0];
//				r.rating = restaurants[i][1];
//				r.vegan = restaurants[i][2];
//				r.price = restaurants[i][3];
//				r.distance = restaurants[i][4];
//				R.push_back(r);
//			}
//		}
//	}
//
//	sort(R.begin(), R.end(), comp);
//	vector<int> ans;
//	for (int i = 0; i < R.size(); i++)
//	{
//		ans.push_back(R[i].id);
//	}
//	return ans;
//}

//
//vector<vector<int>> restaurant = {
//	{1,4,1,40,10},
//	{2,8,0,50,5},
//	{3,8,1,30,4},
//	{4,10,0,10,3},
//	{5,1,1,15,1}
//};
//filterRestaurants(restaurant, 1, 50, 10);