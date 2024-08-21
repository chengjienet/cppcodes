//
// Created by Administrator on 2024/8/21.
//
#include "iostream"

using namespace std;


int main() {
    int *pInt = new int;

    *pInt = 100;
    cout << pInt << endl;
    cout << *pInt << endl;
    delete pInt;

    int *pInt1 = new int[10];
    for (int i = 0; i < 10; i++) {
        pInt1[i] = i + 1;
    };

    for (int i = 0; i < 10; i++) {
        cout << pInt1[i] << endl;
    };


    delete[] pInt1;

    return 0;
}