#include <iostream>
using namespace std;

int main() {
    int n, i;
    int d;
    printf("请输入人数\n");
    cin >> d;

    // 使用动态数组来存储成绩
    long double* y = new long double[d + 1];
    long double* s = new long double[d + 1];
    long double* j = new long double[d + 1];
    long double a, b, c;

    printf("请输入语文最大成绩");
    cin >> a;
    printf("请输入数学最大成绩");
    cin >> b;
    printf("请输入英语最大成绩");
    cin >> c;

    for (i = 1; i <= d; i++) {
        cout << i << "号语文成绩:";
        cin >> y[i];
        while (y[i] > a) {
            cout << "你输入的成绩太大，请重新输入" << endl;
            cin >> y[i];
        }
    }

    for (i = 1; i <= d; i++) {
        cout << i << "号数学成绩:";
        cin >> s[i];
        while (s[i] > b) {
            cout << "你输入的成绩太大，请重新输入" << endl;
            cin >> s[i];
        }
    }

    for (i = 1; i <= d; i++) {
        cout << i << "号英语成绩:";
        cin >> j[i];
        while (j[i] > c) {
            cout << "你输入的成绩太大，请重新输入" << endl;
            cin >> j[i];
        }
    }

    while (true) {
        cout << "请输入学号1-" << d << " (输入0退出):" << endl;
        cin >> n;
        if (n == 0) break; // 退出循环
        if (n >= 1 && n <= d) {
            cout << "你的语文成绩是" << y[n] << " 数学成绩是" << s[n] << " 英语成绩是" << j[n] << endl;
            cout << "你的总成绩是" << y[n] + s[n] + j[n] << endl;
            // 语文成绩评价
            if (y[n] >= 95) cout << "你的语文成绩太好了！继续努力！\n";
            else if (y[n] >= 90) cout << "你的语文成绩还可以，好好努力。\n";
            else if (y[n] >= 80) cout << "你的语文成绩还行，好好努力。\n";
            else cout << "你的语文成绩太差了，你必须好好努力。\n";
            // 数学成绩评价
            if (s[n] >= 95) cout << "你的数学成绩太好了！继续努力！\n";
            else if (s[n] >= 90) cout << "你的数学成绩还可以，好好努力。\n";
            else if (s[n] >= 80) cout << "你的数学成绩还行，好好努力。\n";
            else cout << "你的数学成绩太差了，你必须好好努力。\n";
            // 英语成绩评价
            if (j[n] >= 95) cout << "你的英语成绩太好了！继续努力！\n";
            else if (j[n] >= 90) cout << "你的英语成绩还可以，好好努力。\n";
            else if (j[n] >= 80) cout << "你的英语成绩还行，好好努力。\n";
            else cout << "你的英语成绩太差了，你必须好好努力。\n";
            // 总成绩评价
            if (y[n] >= 95 && s[n] >= 95 && j[n] >= 95) cout << "你的成绩太好了！继续努力！\n";
            else if (y[n] >= 90 && s[n] >= 90 && j[n] >= 90) cout << "你的成绩还可以，好好努力。\n";
            else if (y[n] >= 80 && s[n] >= 80 && j[n] >= 80) cout << "你的成绩还可以，好好努力。\n";
            else cout << "你的成绩太差了,你必须好好努力。\n";
        }
        else {
            printf("您输入的学号不存在\n");
        }
    }

    // 释放动态数组内存
    delete[] y;
    delete[] s;
    delete[] j;

    return 0;
}
