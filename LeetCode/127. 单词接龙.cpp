//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//#include <set>
//#include <unordered_set>
//using namespace std;
//#pragma warning(disable:4996)
//
////struct TreeNode {
////	int val;
////	TreeNode* left;
////	TreeNode* right;
////	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
////	
////};
//
////µ•œÚBFS
////int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
////
////	set<string> word_set(wordList.begin(), wordList.end());
////	if (word_set.find(endWord)==word_set.end())
////	{
////		return 0;
////	}
////
////	int length = beginWord.size();
////	map<string, vector<string>> word_map;
////	for (auto word:word_set)
////	{
////		for (int i = 0; i < length; i++)
////		{
////			string new_word = word.substr(0, i) + "*" + word.substr(i + 1, length);
////			auto search = word_map.find(new_word);
////			if (search !=end(word_map))
////			{
////				search->second.push_back(word);
////			}
////			else
////			{
////				vector<string> v;
////				v.push_back(word);
////				word_map.insert(make_pair(new_word, v));
////			}
////		}
////	}
////	map<string, int> word_view;
////	for (auto word:word_set )
////	{
////		word_view.insert(make_pair(word, 0));
////	}
////
////	queue<string> q;
////	q.push(beginWord);
////	word_view.insert(make_pair(beginWord, 1));
////
////	int depth = 1;
////	while (!q.empty())
////	{
////		depth++;
////		int width = q.size();
////		for (int i = 0; i < width; i++)
////		{
////			string word = q.front();
////			q.pop();
////			for (int k = 0; k < length; k++)
////			{
////				string substitude = word.substr(0, k) + "*" + word.substr(k + 1, length);
////				auto search = word_map.find(substitude);
////				if (search==word_map.end())
////				{
////					continue;
////				}
////				vector<string> v = search->second;
////				for (int j = 0; j < v.size(); j++)
////				{
////					string new_word = v[j];
////					if (word_view.find(new_word)->second == 0)
////					{
////						auto view = word_view.find(new_word);
////						view->second = 1;
////						if (new_word == endWord)
////						{
////							return depth;
////						}
////						else {
////							q.push(new_word);
////						}
////
////					}
////				}
////			}
////			
////		}	
////	}
////	return 0;
////}
//
//int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//		set<string> word_set(wordList.begin(), wordList.end());
//	if (word_set.find(endWord)==word_set.end())
//	{
//		return 0;
//	}
//
//	int length = beginWord.size();
//	map<string, vector<string>> word_map;
//	for (auto word:word_set)
//	{
//		for (int i = 0; i < length; i++)
//		{
//			string new_word = word.substr(0, i) + "*" + word.substr(i + 1, length);
//			auto search = word_map.find(new_word);
//			if (search !=end(word_map))
//			{
//				search->second.push_back(word);
//			}
//			else
//			{
//				vector<string> v;
//				v.push_back(word);
//				word_map.insert(make_pair(new_word, v));
//			}
//		}
//	}
//
//	map<string, int>view1, view2;
//	for (auto word:word_set)
//	{
//		view1.insert(make_pair(word, 0));
//		view2.insert(make_pair(word, 0));
//	}
//	queue<string> q1;
//	q1.push(beginWord);
//	view1.insert(make_pair(beginWord, 1));
//	queue<string> q2;
//	q2.push(endWord);
//	view2.find(endWord)->second = 1;
//
//	int depth1 = 1;
//	int depth2 = 0;
//	
//	while (!q1.empty() && !q2.empty())
//	{
//
//		depth1++;
//		int width1 = q1.size();
//		for (int i = 0; i < width1; i++)
//		{
//			string word = q1.front();
//			q1.pop();
//			for (int k = 0; k < length; k++)
//			{
//				string substitude = word.substr(0, k) + "*" + word.substr(k + 1, length);
//				auto search = word_map.find(substitude);
//				if (search == word_map.end())
//				{
//					continue;
//				}
//				vector<string> v = search->second;
//				for (int j = 0; j < v.size(); j++)
//				{
//					string new_word = v[j];
//					if (view1.find(new_word)->second == 0)
//					{
//						auto view = view1.find(new_word);
//						view->second = 1;
//						if (view2.find(new_word)->second == 1)
//						{
//							return depth1 + depth2;
//						}
//						else {
//							q1.push(new_word);
//						}
//
//					}
//				}
//			}
//
//		}
//
//		depth2++;
//		int width2 = q2.size();
//		for (int i = 0; i < width2; i++)
//		{
//			string word = q2.front();
//			q2.pop();
//			for (int k = 0; k < length; k++)
//			{
//				string substitude = word.substr(0, k) + "*" + word.substr(k + 1, length);
//				auto search = word_map.find(substitude);
//				if (search == word_map.end())
//				{
//					continue;
//				}
//				vector<string> v = search->second;
//				for (int j = 0; j < v.size(); j++)
//				{
//					string new_word = v[j];
//					if (view2.find(new_word)->second == 0)
//					{
//						auto view = view2.find(new_word);
//						view->second = 1;
//						if (view1.find(new_word)->second == 1)
//						{
//							return depth1 + depth2;
//						}
//						else {
//							q2.push(new_word);
//						}
//
//					}
//				}
//			}
//
//
//		}
//	}
//}
//
//int main()
//{
//	vector<string> wordList = { "a","b","c" };
//	cout << ladderLength("a", "c", wordList) << endl;
//	system("pause"); 
//}
