#include <iostream>
using namespace std;

int main() {
    int n, i;
    int d;
    printf("����������\n");
    cin >> d;

    // ʹ�ö�̬�������洢�ɼ�
    long double* y = new long double[d + 1];
    long double* s = new long double[d + 1];
    long double* j = new long double[d + 1];
    long double a, b, c;

    printf("�������������ɼ�");
    cin >> a;
    printf("��������ѧ���ɼ�");
    cin >> b;
    printf("������Ӣ�����ɼ�");
    cin >> c;

    for (i = 1; i <= d; i++) {
        cout << i << "�����ĳɼ�:";
        cin >> y[i];
        while (y[i] > a) {
            cout << "������ĳɼ�̫������������" << endl;
            cin >> y[i];
        }
    }

    for (i = 1; i <= d; i++) {
        cout << i << "����ѧ�ɼ�:";
        cin >> s[i];
        while (s[i] > b) {
            cout << "������ĳɼ�̫������������" << endl;
            cin >> s[i];
        }
    }

    for (i = 1; i <= d; i++) {
        cout << i << "��Ӣ��ɼ�:";
        cin >> j[i];
        while (j[i] > c) {
            cout << "������ĳɼ�̫������������" << endl;
            cin >> j[i];
        }
    }

    while (true) {
        cout << "������ѧ��1-" << d << " (����0�˳�):" << endl;
        cin >> n;
        if (n == 0) break; // �˳�ѭ��
        if (n >= 1 && n <= d) {
            cout << "������ĳɼ���" << y[n] << " ��ѧ�ɼ���" << s[n] << " Ӣ��ɼ���" << j[n] << endl;
            cout << "����ܳɼ���" << y[n] + s[n] + j[n] << endl;
        }
        else {
            printf("�������ѧ�Ų�����\n");
        }
    }

    // �ͷŶ�̬�����ڴ�
    delete[] y;
    delete[] s;
    delete[] j;

    return 0;
}
