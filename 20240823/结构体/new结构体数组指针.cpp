//
// Created by Administrator on 2024/8/23.
//
#include "iostream"

using namespace std;

// 为了方便访问，定义结构体类型
// 默认结构体类型为结构体类型
typedef struct {
    string name;
    int age = 18;
    string gender = "男";
    int score = 100;
} Student;

int main() {
    Student *p = new Student[3]{{"张三"},
                                {"李四"},
                                {"王五"}};
    // 遍历访问数组方法一
    for (int i = 0; i < 3; ++i) {
        cout << "姓名：" << p[i].name << endl;
        cout << "年龄：" << p[i].age << endl;
        cout << "性别：" << p[i].gender << endl;
        cout << "分数：" << p[i].score << endl;
        cout<<"---------------------------"<<endl;
    }

    cout<<"##############################################"<<endl;
    // 遍历数组方法二
    for (int i = 0; i < 3; ++i) {
        cout << "姓名：" << (*(p + i)).name << endl;
        cout << "年龄：" << (*(p + i)).age << endl;
        cout << "性别：" << (*(p + i)).gender << endl;
        cout << "分数：" << (*(p + i)).score << endl;
        cout<<"---------------------------"<<endl;
    }


    delete[] p;


    return 0;
}