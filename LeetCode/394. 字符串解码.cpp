//#include <iostream>
//#include <string>
//#include <cmath>
//#include <stack>
//#include <queue>
//#include <map>
//#include <vector>
//#include <cstdio>
//#include <set>
//using namespace std;
//#pragma warning(disable:4996)
//
//string decodeString(string s) {
//	stack<string> nums;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i]>='0'&&s[i]<='9')
//		{
//			string temp;
//			temp += s[i];
//			while (1)
//			{
//				i++;
//				if (s[i] >= '0' && s[i] <= '9')
//					temp += s[i];
//				else
//				{
//
//					nums.push(temp);
//					i--;
//					break;
//				}
//			}
//		}
//		else if (s[i]=='[')
//		{
//			nums.push("[");
//		}
//		else if ((s[i]>='a'&&s[i]<='z')|| (s[i] >= 'A' && s[i] <= 'Z'))
//		{
//			string temp;
//			temp += s[i];
//			while (1)
//			{
//				i++;
//				if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
//					temp += s[i];
//				else
//				{
//					if (!nums.empty() && nums.top() != "[")
//					{
//						nums.top() += temp;
//					}
//					else
//					{
//						nums.push(temp);
//					}
//					i--;
//					break;
//				}
//			}
//		}
//		else if (s[i]==']')
//		{
//			string single = nums.top();
//			nums.pop();
//			if (nums.top()=="[")
//			{
//				nums.pop();
//			}
//			int times = atoi(nums.top().c_str());
//			nums.pop();
//			string temp;
//			while (times--)
//			{
//				temp += single;
//			}
//			if (!nums.empty()&&nums.top()!="[")
//			{
//				nums.top() += temp;
//			}
//			else
//			{
//				nums.push(temp);
//			}
//		}
//	}
//
//	string ans;
//	while (!nums.empty())
//	{
//		ans = nums.top()+ans;
//		nums.pop();
//	}
//	return ans;
//}
//
//
//int main()
//{
//	cout << decodeString("3[a]2[b4[F]c]") << endl;
//	system("pause"); 
//}
