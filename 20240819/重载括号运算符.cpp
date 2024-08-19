//
// Created by Administrator on 2024/8/16.
//
#include "iostream"

using namespace std;

void mysong(string str) {
    cout << "普通函数：" << str << endl;
}

class MySong {
public:
    void operator()(string str) {
        cout << "重载函数：" << str << endl;
    }
};

int main() {
    MySong mysong;
    ::mysong("hello");
    mysong("hello");

    return 0;
}