//
// Created by Administrator on 2024/8/21.
//
#include "iostream"

using namespace std;

int main() {
    // 已知数组，移除下标为0和5的两个元素
    int *parr = new int[]{3, 5, 1, 11, 99, 66, 22, 2, 8, 6};
    int *newparr = new int[8];
    int j = 0;
    for (int i = 0; i < 10; i++) {
        if (i == 0 || i == 5) {
            continue;
        }
        newparr[j] = parr[i];
        j++;
    }

    delete[] parr;
    parr = newparr;

    for (int i = 0; i < sizeof(newparr); i++) {
        cout << newparr[i] << endl;
    }

    delete[] newparr;


    return 0;
}