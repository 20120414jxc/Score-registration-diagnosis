#include <iostream>
using namespace std;
int main() {
	int n, i;
	long double y[6], s[6], j[6], m = 10;
	for (i = 1;i <= 5;i++) {
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
	for (i = 1;i <= 5;i++) {
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
	for (i = 1;i <= 5;i++) {
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
			if (y[n] >= 95) cout << "������ĳɼ�̫���ˣ�����Ŭ����\n";
			else if (y[n] < 95 && y[n] >= 90) cout << "������ĳɼ������ԣ��ú�Ŭ����\n";
			else if (y[n] < 90 && y[n] >= 80) cout << "������ĳɼ����У��ú�Ŭ����\n";
			else if (y[n] < 80) cout << "������ĳɼ�̫���ˣ������ú�Ŭ����\n";
			if (s[n] >= 95) cout << "�����ѧ�ɼ�̫���ˣ�����Ŭ����\n";
			else if (s[n] < 95 && s[n] >= 90) cout << "�����ѧ�ɼ������ԣ��ú�Ŭ����\n";
			else if (s[n] < 90 && s[n] >= 80) cout << "�����ѧ�ɼ����У��ú�Ŭ����\n";
			else if (s[n] < 80) cout << "�����ѧ�ɼ�̫���ˣ������ú�Ŭ����\n";
			if (j[n] >= 95) cout << "���Ӣ��ɼ�̫���ˣ�����Ŭ����\n";
			else if (j[n] < 95 && j[n] >= 90) cout << "���Ӣ��ɼ������ԣ��ú�Ŭ����\n";
			else if (j[n] < 90 && j[n] >= 80) cout << "���Ӣ��ɼ����У��ú�Ŭ����\n";
			else if (j[n] < 80) cout << "���Ӣ��ɼ�̫���ˣ������ú�Ŭ����\n";
			if (y[n] >= 95 && s[n] >= 95 && j[n] >= 95) cout << "��ĳɼ�̫���ˣ�����Ŭ����\n";
			else if (y[n] >= 90 && y[n] < 95 && s[n] >= 90 && s[n] < 95 && j[n] >= 90 && j[n] < 95) cout << "��ĳɼ������ԣ��ú�Ŭ����\n";
			else if (y[n] >= 80 && y[n] < 90 && s[n] >= 80 && s[n] < 90 && j[n] >= 80 && j[n] < 90) cout << "��ĳɼ������ԣ��ú�Ŭ����\n";
			else if (y[n] < 80 && s[n] < 80 && j[n] < 80) cout << "��ĳɼ�̫����,�����ú�Ŭ����\n";
			else;
		}
		else printf("�������ѧ�Ų�����\n");
	}
	return 0;
}
