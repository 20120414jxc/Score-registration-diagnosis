#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	int n, i;
	long double y[6], s[6], j[6], m = 10;
	for (i = 1;i <= 5;i++)
	{
		cout << i << "�����ĳɼ�:";
		cin >> y[i];
		while (m > 8) {
			if (y[i] > 100) {
				cout << "������ĳɼ�̫������������" << endl;
				cin >> y[i];
			}
			else break;
		}
	}
	for (i = 1;i <= 5;i++)
	{
		cout << i << "����ѧ�ɼ�:";
		cin >> s[i];
		while (m > 8) {
			if (s[i] > 100) {
				cout << "������ĳɼ�̫������������" << endl;
				cin >> s[i];
			}
			else break;
		}
	}
	for (i = 1;i <= 5;i++)
	{
		cout << i << "��Ӣ��ɼ�:";
		cin >> j[i];
		while (m > 8) {
			if (j[i] > 100) {
				cout << "������ĳɼ�̫������������" << endl;
				cin >> j[i];
			}
			else break;
		}
	}
	while (i++) {
		printf("������ѧ��1-5:");
		cin >> n;
		if (n >= 1 && n <= 5) {
			cout << "������ĳɼ���" << y[n] << " ��ѧ�ɼ���" << s[n] << " Ӣ��ɼ���" << j[n] << endl;
			cout << "����ܳɼ���" << y[n] + s[n] + j[n] << endl;
		}
		else
			printf("�������ѧ�Ų�����\n");
	}
	return 0;
}
