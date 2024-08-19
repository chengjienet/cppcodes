#include <iostream>
#include <random>

using namespace std;

// 生成一个介于 minVal 到 maxVal 之间的随机整数
int generateRandomNumber(int minVal, int maxVal) {
    // 创建随机数生成器
    random_device rd;
    mt19937 gen(rd());

    // 定义分布范围为 minVal 到 maxVal
    uniform_int_distribution<> dis(minVal, maxVal);

    // 生成随机数
    return dis(gen);
}

int main() {
    // 调用函数并输出结果
    int randomNumber = generateRandomNumber(1, 99);
    cout << "随机生成的数字是: " << randomNumber << endl;

    return 0;
}
