//
// Created by Administrator on 2024/8/23.
//
#include "iostream"

using namespace std;

typedef struct {
    string name;
    int age;
    string gender;
    int score;
} Student;

int main() {
    Student stu1;
    Student stu2 = {"liu", 18, "female", 100};

    cout << "请输入姓名：";
    cin >> stu1.name;
    cout << "请输入年龄：";
    cin >> stu1.age;
    cout << "请输入性别：";
    cin >> stu1.gender;
    cout << "请输入分数：";
    cin >> stu1.score;
    cout << "stu1的姓名：" << stu1.name << endl;
    cout << "stu1的年龄：" << stu1.age << endl;
    cout << "stu1的性别：" << stu1.gender << endl;
    cout << "stu1的分数：" << stu1.score << endl;
    cout << "----------------------------" << endl;
    cout << "stu2的姓名：" << stu2.name << endl;
    cout << "stu2的年龄：" << stu2.age << endl;
    cout << "stu2的性别：" << stu2.gender << endl;
    cout << "stu2的分数：" << stu2.score << endl;


    return 0;
}