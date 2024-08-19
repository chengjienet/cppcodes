//
// Created by Administrator on 2024/8/15.
//
#include "iostream"

using namespace std;

int main() {
    int a = 0;
    cout << "请输入一个数字：";
    cin >> a;
    switch (a) {
        case 1:
            cout << "你输入的是1" << endl;
            break;
        case 2:
            cout << "你输入的是2" << endl;
            break;
        case 3:
            cout << "你输入的是3" << endl;
            break;
        default:
            cout << "你输入的不是1,2,3" << endl;
            break;
    }
    return 0;
}
