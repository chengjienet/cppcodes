///
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
    Student stu1[5] = {{"tian"},
                       {"liu"},
                       {"xue"},
                       {"kong"},
                       {"wang"}};

    for (int i = 0; i < 5; ++i) {
        cout << "姓名：" << stu1[i].name << endl;
        cout << "年龄：" << stu1[i].age << endl;
        cout << "性别：" << stu1[i].gender << endl;
        cout << "分数：" << stu1[i].score << endl;
        cout<<"-----------------------------"<<endl;
    }




    return 0;
    }