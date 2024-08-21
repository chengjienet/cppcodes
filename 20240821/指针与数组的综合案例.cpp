/c++
//
// Created by Administrator on 2024/8/21.
//

#include "iostream"

using namespace std;

int main() {
    // 初始化两个动态分配的整数数组
    int *pArr = new int[10]{9, 7, 2, 6, 4, 8, 1, 3, 5};
    int *pArr1 = new int[10]{9, 7, 2, 6, 4, 8, 1, 3, 5};

    // 选择排序：找到最小元素并将其放置在正确的位置
    for (int i = 0; i < 9; ++i) {
        int min = i;
        for (int j = i + 1; j < 10; ++j) {
            if (pArr[j] < pArr[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = pArr[i];
            pArr[i] = pArr[min];
            pArr[min] = temp;
        }
    }

    // 插入排序：将元素插入到已排序的序列中
    for (int i = 1; i < 10; ++i) {
        int temp = pArr1[i];
        int j = i - 1;
        while (j >= 0 && temp < pArr1[j]) {
            pArr1[j + 1] = pArr1[j];
            j--;
        }
        pArr1[j + 1] = temp;
    }

    // 输出排序后的数组
    for (int i = 0; i < 10; ++i) {
        cout << pArr[i] << " ";
    }

    cout << endl;

    // 输出排序后的数组
    for (int i = 0; i < 10; ++i) {
        cout << pArr1[i] << " ";
    }

    // 释放动态分配的内存
    delete[] pArr;
    delete[] pArr1;
    return 0;
}
