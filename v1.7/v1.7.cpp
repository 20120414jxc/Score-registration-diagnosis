#include <iostream>
using namespace std;

int main() {
    long double q, e, f;
    printf("请输入语文最大成绩");
    cin >> q;
    printf("请输入数学最大成绩");
    cin >> e;
    printf("请输入英语最大成绩");
    cin >> f;

    int h, r;
    printf("请输入这个年级的班数");
    cin >> h;
    printf("请输入一个班的人数");
    cin >> r;

    // 动态分配二维数组
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
            cout << "请输入" << i << "班" << d << "号学生语文成绩";
            cin >> a[i][d];
            while (a[i][d] > q) {
                cout << "你输入的成绩太大，请重新输入" << endl;
                cin >> a[i][d];
            }
        }
    }

    for (int i = 1; i <= h; i++) {
        for (int d = 1; d <= r; d++) {
            cout << "请输入" << i << "班" << d << "号学生数学成绩";
            cin >> b[i][d];
            while (b[i][d] > e) {
                cout << "你输入的成绩太大，请重新输入" << endl;
                cin >> b[i][d];
            }
        }
    }

    for (int i = 1; i <= h; i++) {
        for (int d = 1; d <= r; d++) {
            cout << "请输入" << i << "班" << d << "号学生英语成绩";
            cin >> c[i][d];
            while (c[i][d] > f) {
                cout << "你输入的成绩太大，请重新输入" << endl;
                cin >> c[i][d];
            }
        }
    }

    while (true) {
        int n, m;
        printf("请输入你的班号 (输入0退出): ");
        cin >> n;
        if (n == 0) break; // 退出循环
        printf("请输入你的学号");
        cin >> m;
        if (n > 0 && n <= h && m > 0 && m <= r) {
            cout << "你的语文成绩是" << a[n][m] << endl
                << "你的数学成绩是" << b[n][m] << endl
                << "你的英语成绩是" << c[n][m] << endl
                << "你的总成绩是" << a[n][m] + b[n][m] + c[n][m] << endl;
        }
        else {
            cout << "你输入的班号或学号不正确，请重新输入" << endl;
        }
    }

    // 释放动态数组内存
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
