//#include <algorithm>
//#include <cassert>
//#include <deque>
//#include <functional>
//#include <iostream>
//#include <iterator>
//#include <limits>
//#include <list>
//#include <map>
//#include <math.h>
//#include <numeric>
//#include <queue>
//#include <sstream>
//#include <stack>
//#include <string>
//#include <unordered_map>
//#include <unordered_set>
//#include <utility>
//#include <vector>
//
//using namespace std;
//
//int cmp(const string& a, const string& b) {
//    return a.length() < b.length();
//}
//
//string arrangeWords(string text) {
//    vector<string> words;
//    stringstream ss(text);
//    string temp;
//    while (ss >> temp) {
//        temp[0] = tolower(temp[0]);
//        words.push_back(temp);
//    }
//
//    string ans = "";
//    stable_sort(words.begin(), words.end(), cmp);
//
//    if (!words.empty())
//    {
//        string word = words[0];
//        word[0] = toupper(word[0]);
//        ans += word;
//    }
//    for (int i = 1; i < words.size(); i++)
//    {
//        ans += ' ';
//        ans += words[i];
//    }
//    return ans;
//
//}