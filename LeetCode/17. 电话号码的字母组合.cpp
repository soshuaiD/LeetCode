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

map<char, vector<string>> M = {
	{'2',{"a","b","c"}},
	{'3',{"d","e","f"}},
	{'4',{"g","h","i"}},
	{'5',{"j","k","l"}},
	{'6',{"m","n","o"}},
	{'7',{"p","q","r","s"}},
	{'8',{"t","u","v"}},
	{'9',{"w","x","y","z"}}
};

vector<string> ans;
string current;

void DFS(string digits, int index) {
	if (index == digits.size())
	{
		ans.push_back(current);
		return;
	}
	else {
		for (int i = 0; i < M[digits[index]].size(); i++)
		{
			current += (M[digits[index]][i]);
			DFS(digits, index + 1);
			current.pop_back();
		}
	}
}

vector<string> letterCombinations(string digits) {
	if (digits.size() == 0)
	{
		return ans;
	}
	else {
		DFS(digits, 0);
	}
	return ans;
}