#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	int n, i;
	long double y[6], s[6], j[6], m = 10;
	for (i = 1;i <= 5;i++)
	{
		cout << i << "号语文成绩:";
		cin >> y[i];
		while (m > 8) {
			if (y[i] > 100) {
				cout << "你输入的成绩太大，请重新输入" << endl;
				cin >> y[i];
			}
			else break;
		}
	}
	for (i = 1;i <= 5;i++)
	{
		cout << i << "号数学成绩:";
		cin >> s[i];
		while (m > 8) {
			if (s[i] > 100) {
				cout << "你输入的成绩太大，请重新输入" << endl;
				cin >> s[i];
			}
			else break;
		}
	}
	for (i = 1;i <= 5;i++)
	{
		cout << i << "号英语成绩:";
		cin >> j[i];
		while (m > 8) {
			if (j[i] > 100) {
				cout << "你输入的成绩太大，请重新输入" << endl;
				cin >> j[i];
			}
			else break;
		}
	}
	while (i++) {
		printf("请输入学号1-5:");
		cin >> n;
		if (n >= 1 && n <= 5) {
			cout << "你的语文成绩是" << y[n] << " 数学成绩是" << s[n] << " 英语成绩是" << j[n] << endl;
			cout << "你的总成绩是" << y[n] + s[n] + j[n] << endl;
		}
		else
			printf("您输入的学号不存在\n");
	}
	return 0;
}
