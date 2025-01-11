#include <iostream>
using namespace std;
int main() {
	long double a, b, c, d, e, f, i = 10;
	printf("请输入语文最大成绩");
	cin >> d;
	printf("请输入数学最大成绩");
	cin >> e;
	printf("请输入英语最大成绩");
	cin >> f;
	while (i > 8) {
		printf("欢迎来到智能成绩诊断系统\n");
		printf("请输入你的语文成绩\n");
		cin >> a;
		while (i > 8) {
			if (a > d) {
				cout << "你输入的成绩太大，请重新输入" << endl;
				cin >> a;
			}
			else break;
		}
		if (a >= 90) cout << "你的等级是A" << endl;
		else if (a < 90 && a >= 80) cout << "你的等级是B" << endl;
		else if (a < 80 && a >= 70) cout << "你的等级是C" << endl;
		else if (a < 70 && a >= 60) cout << "你的等级是D" << endl;
		else cout << "你的等级是E" << endl;
		printf("请输入你的数学成绩\n");
		cin >> b;
		while (i > 8) {
			if (b > e) {
				cout << "你输入的成绩太大，请重新输入" << endl;
				cin >> b;
			}
			else break;
		}
		if (b >= 90) cout << "你的等级是A" << endl;
		else if (b < 90 && b >= 80) cout << "你的等级是B" << endl;
		else if (b < 80 && b >= 70) cout << "你的等级是C" << endl;
		else if (b < 70 && b >= 60) cout << "你的等级是D" << endl;
		else cout << "你的等级是E" << endl;
		printf("请输入你的英语成绩\n");
		cin >> c;
		while (i > 8) {
			if (f > 100) {
				cout << "你输入的成绩太大，请重新输入" << endl;
				cin >> c;
			}
			else break;
		}
		if (c >= 90) cout << "你的等级是A" << endl;
		else if (c < 90 && c >= 80) cout << "你的等级是B" << endl;
		else if (c < 80 && c >= 70) cout << "你的等级是C" << endl;
		else if (c < 70 && c >= 60) cout << "你的等级是D" << endl;
		else cout << "你的等级是E" << endl;
		cout << "你的总成绩是" << a + b + c << endl;
		if (a >= 95) cout << "你的语文成绩太好了！继续努力！\n";
		else if (a < 95 && a >= 90) cout << "你的语文成绩还可以，好好努力。\n";
		else if (a < 90 && a >= 80) cout << "你的语文成绩还行，好好努力。\n";
		else if (a < 80) cout << "你的语文成绩太差了，你必须好好努力。\n";
		if (b >= 95) cout << "你的数学成绩太好了！继续努力！\n";
		else if (b < 95 && b >= 90) cout << "你的数学成绩还可以，好好努力。\n";
		else if (b < 90 && b >= 80) cout << "你的数学成绩还行，好好努力。\n";
		else if (b < 80) cout << "你的数学成绩太差了，你必须好好努力。\n";
		if (c >= 95) cout << "你的英语成绩太好了！继续努力！\n";
		else if (c < 95 && c >= 90) cout << "你的英语成绩还可以，好好努力。\n";
		else if (c < 90 && c >= 80) cout << "你的英语成绩还行，好好努力。\n";
		else if (c < 80) cout << "你的英语成绩太差了，你必须好好努力。\n";
		if (a >= 95 && b >= 95 && c >= 95) cout << "你的成绩太好了！继续努力！\n";
		else if (a >= 90 && a < 95 && b >= 90 && b < 95 && c >= 90 && c < 95) cout << "你的成绩还可以，好好努力。\n";
		else if (a >= 80 && a < 90 && b >= 80 && b < 90 && c >= 80 && c < 90) cout << "你的成绩还可以，好好努力。\n";
		else if (a < 80 && b < 80 && c < 80) cout << "你的成绩太差了,你必须好好努力。\n";
		else;
	}
	return 0;
}
