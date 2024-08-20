//
// Created by Administrator on 2024/8/20.
//
#include "iostream"
#include "random"

using namespace std;

int get_random_num(int min, int max) {
    // 创建一个随机数生成器
    random_device rd;
    mt19937 gen(rd());


    // 定义一个均匀分布的整数范围
    uniform_int_distribution<> dis(min, max);

    // 生成一个随机数并输出
    int random_number = dis(gen);
    return random_number;
}

int main() {
    string names[] = {
            "Landon", "Avery", "Kamden", "Bentley", "Finnegan", "Nash", "Emmett",
            "Greyson", "Noah", "Jace", "Jaxton", "Sawyer", "Zachary", "Eli",
            "Keegan", "Lincoln", "Isaac", "Asher", "Declan", "Theo", "Levi",
            "Dominic", "Austin", "Wyatt", "Carter", "Logan", "Luke", "Max",
            "Ethan", "Miles", "Oliver", "Hudson", "Owen", "William", "Joshua",
            "Benjamin", "Henry", "Lucas", "Alexander", "Jackson", "Mason",
            "Grayson", "Ryder", "Elijah", "Liam", "Caleb", "Thomas",
            "Cooper", "Hunter", "Connor"
    };

    string arr[2][2][5];
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++) {
            for (int k = 0; k < sizeof(arr[0][0]) / sizeof(arr[0][0][0]); k++) {
                int num = get_random_num(0, 49);
                arr[i][j][k] = names[num];
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++) {
            for (int k = 0; k < sizeof(arr[0][0]) / sizeof(arr[0][0][0]); k++) {
                if (i == 0) {
                    cout << "专业" + to_string(i + 1) + ":物理" + "，班级:" + to_string(j + 1) + "班，" + "座位号:" +
                            to_string(k + 1) + "号，" +
                            "姓名:" + arr[i][j][k];
                } else {
                    cout << "专业" + to_string(i + 1) + ":计算机" + "，班级:" + to_string(j + 1) + "班，" + "座位号:" +
                            to_string(k + 1) + "号，" +
                            "姓名:" + arr[i][j][k];
                }

                cout << endl;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
