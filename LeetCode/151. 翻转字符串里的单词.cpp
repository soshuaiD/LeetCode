#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

string reverseWords(string s) {
	string str = "";
	stack<string> st;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i]==' '&&str !="")
		{
			st.push(str);
			str = "";
		}
		else if (s[i] == ' ' && str == "") {
			continue;
		}
		else {
			str += s[i];
		}
	}
	if (str!="")
	{
		st.push(str);
	}

	string ans;
	if (!st.empty())
	{
		ans += st.top();
		st.pop();
	}
	while (!st.empty())
	{
		ans += ' ' + st.top();
		st.pop();
	}
	return ans;
}