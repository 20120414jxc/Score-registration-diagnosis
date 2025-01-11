#include <iostream>
using namespace std;

int main() {
    int d, n;
    printf("请输入人数\n");
    cin >> d;

    // 动态分配数组
    long double *a = new long double[d + 1];

    for (int i = 1; i <= d; i++) {
        cout << "请输入" << i << "号50米短跑成绩";
        cin >> a[i];
    }

    while (true) {
        printf("请输入你的学号 (输入0退出): ");
        cin >> n;
        if (n == 0) break; // 退出循环
        if (n > 0 && n <= d) {
            cout << "你的50米短跑成绩是" << a[n] << " " << endl;
        } else {
            cout << "你输入的学号不正确，请重新输入" << endl;
        }
    }

    // 释放动态数组内存
    delete[] a;

    return 0;
}
