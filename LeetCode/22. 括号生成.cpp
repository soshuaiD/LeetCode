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

vector<string> ans;

void DFS(string current,int left_bracket,int right_bracket) {
	if (left_bracket == 0 && right_bracket == 0) {
		ans.push_back(current);
		return;
	}
	else {
		if (left_bracket)
		{
			DFS(current + "(", left_bracket - 1, right_bracket);
		}
		if (left_bracket < right_bracket) {
			DFS(current + ")", left_bracket, right_bracket - 1);
		}
	}
}

vector<string> generateParenthesis(int n) {
	if (n == 0) {
		return ans;
	}
	else {
		DFS("",n,n);
	}

}