#include <iostream>
using namespace std;
int main() {
	long double a, b, c, d, e, f, i = 10;
	printf("�������������ɼ�");
	cin >> d;
	printf("��������ѧ���ɼ�");
	cin >> e;
	printf("������Ӣ�����ɼ�");
	cin >> f;
	while (i > 8) {
		printf("��ӭ�������ܳɼ����ϵͳ\n");
		printf("������������ĳɼ�\n");
		cin >> a;
		while (i > 8) {
			if (a > d) {
				cout << "������ĳɼ�̫������������" << endl;
				cin >> a;
			}
			else break;
		}
		if (a >= 90) cout << "��ĵȼ���A" << endl;
		else if (a < 90 && a >= 80) cout << "��ĵȼ���B" << endl;
		else if (a < 80 && a >= 70) cout << "��ĵȼ���C" << endl;
		else if (a < 70 && a >= 60) cout << "��ĵȼ���D" << endl;
		else cout << "��ĵȼ���E" << endl;
		printf("�����������ѧ�ɼ�\n");
		cin >> b;
		while (i > 8) {
			if (b > e) {
				cout << "������ĳɼ�̫������������" << endl;
				cin >> b;
			}
			else break;
		}
		if (b >= 90) cout << "��ĵȼ���A" << endl;
		else if (b < 90 && b >= 80) cout << "��ĵȼ���B" << endl;
		else if (b < 80 && b >= 70) cout << "��ĵȼ���C" << endl;
		else if (b < 70 && b >= 60) cout << "��ĵȼ���D" << endl;
		else cout << "��ĵȼ���E" << endl;
		printf("���������Ӣ��ɼ�\n");
		cin >> c;
		while (i > 8) {
			if (f > 100) {
				cout << "������ĳɼ�̫������������" << endl;
				cin >> c;
			}
			else break;
		}
		if (c >= 90) cout << "��ĵȼ���A" << endl;
		else if (c < 90 && c >= 80) cout << "��ĵȼ���B" << endl;
		else if (c < 80 && c >= 70) cout << "��ĵȼ���C" << endl;
		else if (c < 70 && c >= 60) cout << "��ĵȼ���D" << endl;
		else cout << "��ĵȼ���E" << endl;
		cout << "����ܳɼ���" << a + b + c << endl;
		if (a >= 95) cout << "������ĳɼ�̫���ˣ�����Ŭ����\n";
		else if (a < 95 && a >= 90) cout << "������ĳɼ������ԣ��ú�Ŭ����\n";
		else if (a < 90 && a >= 80) cout << "������ĳɼ����У��ú�Ŭ����\n";
		else if (a < 80) cout << "������ĳɼ�̫���ˣ������ú�Ŭ����\n";
		if (b >= 95) cout << "�����ѧ�ɼ�̫���ˣ�����Ŭ����\n";
		else if (b < 95 && b >= 90) cout << "�����ѧ�ɼ������ԣ��ú�Ŭ����\n";
		else if (b < 90 && b >= 80) cout << "�����ѧ�ɼ����У��ú�Ŭ����\n";
		else if (b < 80) cout << "�����ѧ�ɼ�̫���ˣ������ú�Ŭ����\n";
		if (c >= 95) cout << "���Ӣ��ɼ�̫���ˣ�����Ŭ����\n";
		else if (c < 95 && c >= 90) cout << "���Ӣ��ɼ������ԣ��ú�Ŭ����\n";
		else if (c < 90 && c >= 80) cout << "���Ӣ��ɼ����У��ú�Ŭ����\n";
		else if (c < 80) cout << "���Ӣ��ɼ�̫���ˣ������ú�Ŭ����\n";
		if (a >= 95 && b >= 95 && c >= 95) cout << "��ĳɼ�̫���ˣ�����Ŭ����\n";
		else if (a >= 90 && a < 95 && b >= 90 && b < 95 && c >= 90 && c < 95) cout << "��ĳɼ������ԣ��ú�Ŭ����\n";
		else if (a >= 80 && a < 90 && b >= 80 && b < 90 && c >= 80 && c < 90) cout << "��ĳɼ������ԣ��ú�Ŭ����\n";
		else if (a < 80 && b < 80 && c < 80) cout << "��ĳɼ�̫����,�����ú�Ŭ����\n";
		else;
	}
	return 0;
}
