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
//#include <set>
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
//typedef struct {
//	int weight;
//	int lchild, rchild, parent;
//}HNode, * HTree;
//
//void selectMin(HTree HT, int length, int* p1, int* p2) {
//	int i = 1;
//	while (HT[i].parent!=0&&i<=length)
//	{
//		i++;
//	}
//	*p1 = i++;
//	while (HT[i].parent != 0 && i <= length)
//	{
//		i++;
//	}
//	*p2 = i++;
//
//	if (HT[*p1].weight > HT[*p2].weight) {
//		int temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//	}
//	for (int n = i; n <= length; n++)
//	{
//		if (HT[n].parent != 0) {
//			continue;
//		}
//		else if(HT[n].weight< HT[*p1].weight) {
//			*p2 = *p1;
//			*p1 = n;
//		}
//		else if (HT[n].weight < HT[*p2].weight) {
//			*p2 = n;
//		}
//	}
//	return;
//
//}
//
//void createHuffmanTree() {
//	int lnode;
//	cout << "input leafnode number:" << endl;
//	cin >> lnode;
//	int length = 2 * lnode - 1;
//	HTree HT = (HTree)malloc(sizeof(HNode) * (length + 1));
//	if (!HT)
//		exit(-1);
//	memset(HT, 0, sizeof(HNode) * (length + 1));
//
//	HTree p = HT;
//	for (int i = lnode+1; i <= length; i++)
//	{
//		(p + i)->weight = INT_MAX;
//	}
//
//	cout << "input leafnode weight:" << endl;
//	for (int i = 1; i <= lnode; i++)
//	{
//		cin >> (p + i)->weight;
//	}
//
//	int p1, p2;
//	for (int i = lnode+1; i <= length; i++)
//	{
//		selectMin(p, length, &p1, &p2);
//		(p + i)->lchild = p1;
//		(p + i)->rchild = p2;
//		(p + i)->weight = (p + p1)->weight + (p + p2)->weight;
//		(p + p1)->parent = i;
//		(p + p2)->parent = i;
//	}
//
//	for (int i = 1; i <= length; i++) {
//         printf("%3d    %3d   %3d   %3d   %3d\n", i, (p + i)->weight, (p + i)->parent, (p + i)->lchild, (p + i)->rchild);//±éÀúÊä³ö
//	}
//
//	return;
//}
//
//int main() {
//	createHuffmanTree();
//	return 0;
//}
