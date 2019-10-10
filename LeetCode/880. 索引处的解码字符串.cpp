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
//string decodeAtIndex(string S, int K) {
//	long wholelength = 0;
//	int N = S.size();
//
//	for (int i = 0; i < N; i++)
//	{
//		if (isdigit(S[i]))
//		{
//			wholelength *= S[i] - '0';
//		}
//		else if (isalpha(S[i]))
//		{
//			wholelength ++;
//		}
//	}
//
//	for (int i = N-1; i >= 0; i--)
//	{
//		K %= wholelength;
//		if (K==0&&isalpha(S[i]))
//		{
//			return (string)"" + S[i];
//		}
//
//		if (isdigit(S[i]))
//		{
//			wholelength /= S[i] - '0';
//		}
//		else
//		{
//			wholelength--;
//		}
//	}
//}
//
//int main()
//{
//	cout << decodeAtIndex("leet2code3", 10) << endl;
//	system("pause"); 
//}
