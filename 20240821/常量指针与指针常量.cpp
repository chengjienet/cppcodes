//
// Created by Administrator on 2024/8/21.
//
#include "iostream"

using namespace std;

int main() {
    int a = 100;
    int b = 200;
    const int *pa = &a; // 常量指针
    pa = &b;  // ok
    // *pa = 300; // error

    int *const pb = &a; // 指针常量
    *pb = 300; // ok
    // pb = &b; // error

    // 双const
    const  int *const pc = &a;
    // *pc = 400; // error
    // pc = &b; // error


    return 0;


    return 0;
}
