//
// Created by Administrator on 2024/8/16.
//
#include "iostream"

using namespace std;


void myPrint(int &page, string &pstr) {
    page = 100;
    pstr = "是一个天山童姥！";
    cout << "我的年龄是：" << page << endl;
    cout << "我的身份是：" << pstr << endl;

}

int main() {
    int age = 18;
    int &rage = age;
    string str = "是一个大帅哥！";
    string &rstr = str;

    myPrint(rage, rstr);

    cout << age << "的我" << str << endl;


    return 0;
}


