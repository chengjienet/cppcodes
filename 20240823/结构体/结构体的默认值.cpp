//
// Created by Administrator on 2024/8/23.
//
#include <iostream>
#include <string>

using namespace std;

// 定义结构体并设置默认值,顺便学一下构造函数
struct Student {
    string name;
    int age;
    string gender;
    int score;

    // 构造函数
    Student(string n, int a = 18, string g = "男", int s = 100)
            : name(n), age(a), gender(g), score(s) {}
};

int main() {
    Student stu1("tian");
    cout << "stu1的name: " << stu1.name << endl;
    cout << "stu1的age: " << stu1.age << endl;
    cout << "stu1的gender: " << stu1.gender << endl;
    cout << "stu1的score: " << stu1.score << endl;

    return 0;
}
