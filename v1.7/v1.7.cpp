#include <iostream>
using namespace std;

int main() {
    long double q, e, f;
    printf("�������������ɼ�");
    cin >> q;
    printf("��������ѧ���ɼ�");
    cin >> e;
    printf("������Ӣ�����ɼ�");
    cin >> f;

    int h, r;
    printf("����������꼶�İ���");
    cin >> h;
    printf("������һ���������");
    cin >> r;

    // ��̬�����ά����
    long double** a = new long double* [h + 1];
    long double** b = new long double* [h + 1];
    long double** c = new long double* [h + 1];
    for (int i = 0; i <= h; ++i) {
        a[i] = new long double[r + 1];
        b[i] = new long double[r + 1];
        c[i] = new long double[r + 1];
    }

    for (int i = 1; i <= h; i++) {
        for (int d = 1; d <= r; d++) {
            cout << "������" << i << "��" << d << "��ѧ�����ĳɼ�";
            cin >> a[i][d];
            while (a[i][d] > q) {
                cout << "������ĳɼ�̫������������" << endl;
                cin >> a[i][d];
            }
        }
    }

    for (int i = 1; i <= h; i++) {
        for (int d = 1; d <= r; d++) {
            cout << "������" << i << "��" << d << "��ѧ����ѧ�ɼ�";
            cin >> b[i][d];
            while (b[i][d] > e) {
                cout << "������ĳɼ�̫������������" << endl;
                cin >> b[i][d];
            }
        }
    }

    for (int i = 1; i <= h; i++) {
        for (int d = 1; d <= r; d++) {
            cout << "������" << i << "��" << d << "��ѧ��Ӣ��ɼ�";
            cin >> c[i][d];
            while (c[i][d] > f) {
                cout << "������ĳɼ�̫������������" << endl;
                cin >> c[i][d];
            }
        }
    }

    while (true) {
        int n, m;
        printf("��������İ�� (����0�˳�): ");
        cin >> n;
        if (n == 0) break; // �˳�ѭ��
        printf("���������ѧ��");
        cin >> m;
        if (n > 0 && n <= h && m > 0 && m <= r) {
            cout << "������ĳɼ���" << a[n][m] << endl
                << "�����ѧ�ɼ���" << b[n][m] << endl
                << "���Ӣ��ɼ���" << c[n][m] << endl
                << "����ܳɼ���" << a[n][m] + b[n][m] + c[n][m] << endl;
        }
        else {
            cout << "������İ�Ż�ѧ�Ų���ȷ������������" << endl;
        }
    }

    // �ͷŶ�̬�����ڴ�
    for (int i = 0; i <= h; ++i) {
        delete[] a[i];
        delete[] b[i];
        delete[] c[i];
    }
    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}
