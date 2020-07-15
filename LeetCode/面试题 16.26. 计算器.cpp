#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <set>
#include <stdlib.h>

using namespace std;

int calculate(string s) {
	int ans = 0;

	stack<int> opr;
	stack<char> opt;

	set<char> optSet = { '+','-','*','/',' ' };

	for (int i = 0; i < s.size(); i++)
	{
		if (optSet.count(s[i]))
		{
			if (s[i] == '+' || s[i] == '-')
			{
				while (!opt.empty()) {
					int num2 = opr.top();
					opr.pop();
					int num1 = opr.top();
					opr.pop();
					if (opt.top() == '*')
					{
						opr.push(num1 * num2);
					}
					else if ( opt.top() == '/') {
						opr.push(num1 / num2);
					}
					else if (opt.top() == '+') {
						opr.push(num1 + num2);
					}
					else if ( opt.top() == '-') {
						opr.push(num1 - num2);
					}
					opt.pop();
				}
				opt.push(s[i]);
			}
			else if (s[i] == '*' || s[i] == '/')
			{
				if (!opt.empty()&& opt.top() == '*')
				{
					int num2 = opr.top();
					opr.pop();
					int num1 = opr.top();
					opr.pop();
					opr.push(num1 * num2); 
					opt.pop();
				}
				else if (!opt.empty() && opt.top() == '/')
				{
					int num2 = opr.top();
					opr.pop();
					int num1 = opr.top();
					opr.pop();
					opr.push(num1 / num2);
					opt.pop();
				}
				opt.push(s[i]);
			}
			else {
				continue;
			}
		}
		else {
			int num= 0;
			for (; i < s.size(); i++) {
				if (s[i]<='9'&&s[i]>='0')
				{
					num = num * 10 - '0' + s[i];
				}
				else{
					break;
				}
			}
			opr.push(num);
			i--;
		}
	}
	while (opr.size()!=1)
	{
		int num2 = opr.top();
		opr.pop();
		int num1 = opr.top();
		opr.pop();
		switch (opt.top())
		{
		case '+':opr.push(num1 + num2); break;
		case '-':opr.push(num1 - num2); break;
		case '*':opr.push(num1 * num2); break;
		case '/':opr.push(num1 / num2); break;
		default:
			cout << "Error!" << endl;
			break;
		}
		opt.pop();
	}
	return opr.top();
}

//int main() {
//	cout << calculate("1*2-3/4+5*6-7*8+9/10") << endl;
//}