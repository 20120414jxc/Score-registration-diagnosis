#include <iostream>
using namespace std;

int main() {
    int d, n;
    printf("����������\n");
    cin >> d;

    // ��̬��������
    long double *a = new long double[d + 1];

    for (int i = 1; i <= d; i++) {
        cout << "������" << i << "��50�׶��ܳɼ�";
        cin >> a[i];
    }

    while (true) {
        printf("���������ѧ�� (����0�˳�): ");
        cin >> n;
        if (n == 0) break; // �˳�ѭ��
        if (n > 0 && n <= d) {
            cout << "���50�׶��ܳɼ���" << a[n] << " " << endl;
        } else {
            cout << "�������ѧ�Ų���ȷ������������" << endl;
        }
    }

    // �ͷŶ�̬�����ڴ�
    delete[] a;

    return 0;
}
