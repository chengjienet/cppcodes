//
// Created by Administrator on 2024/8/23.
//
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
    Student student = {"张三", 18, "男", 100};
    cout << "学生姓名：" << student.name << endl;
    cout << "学生年龄：" << student.age << endl;
    cout << "学生性别：" << student.gender << endl;
    cout << "学生成绩：" << student.score << endl;
    cout << "-----------------------------------" << endl;

    Student *pStudent = new Student{"李四", 19, "女", 99};

    cout << "学生姓名：" << pStudent->name << endl;
    cout << "学生年龄：" << pStudent->age << endl;
    cout << "学生性别：" << pStudent->gender << endl;
    cout << "学生成绩：" << pStudent->score << endl;

    delete pStudent;


    return 0;
}