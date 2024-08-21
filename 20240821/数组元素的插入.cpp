/c++
// 程序主要功能：在已有数组的基础上，通过插入新元素创建新数组，并输出新数组的内容
// Created by Administrator on 2024/8/21.

#include "iostream"

using namespace std;

int main() {
    // 初始化原数组，长度为5
    int *pArr = new int[5]{1, 3, 5, 7, 9};
    // 分配空间给新数组，长度为7，以容纳插入的元素
    int *pNewArr = new int[7];
    // offset用于调整索引，因为插入元素会导致索引偏移
    int offset = 0;
    // 遍历原数组，将元素复制到新数组，并在指定位置插入新元素
    for (int i = 0; i < 7; i++) {
        // 在索引为1的位置插入11，并调整offset
        if (i == 1) {
            offset++;
            pNewArr[i] = 11;
        // 在索引为3的位置插入66，并调整offset
        } else if (i == 3) {
            offset++;
            pNewArr[i] = 66;
        } else {
            // 复制原数组元素到新数组，考虑到offset的调整
            pNewArr[i] = pArr[i - offset];
        }
    }
    // 释放原数组内存
    delete[] pArr;
    // 输出新数组的内容
    for (int i = 0; i < 7; i++) {
        cout << pNewArr[i] << endl;
    }

    // 释放新数组内存
    delete[] pNewArr;


    return 0;
}
