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
    // 创建结构体数组
    Student students[3];
    // 赋值
    students[0] = {"张三", 18, "男", 100};
    students[1] = {"李四", 19, "女", 99};
    students[2] = {"王五", 20, "男", 98};

    Student *p = students;
    // 遍历方法一
    for (int i = 0; i < 3; ++i) {
        cout << "姓名：" << p->name << endl;
        cout << "年龄：" << p->age << endl;
        cout << "性别：" << p->gender << endl;
        cout << "分数：" << p->score << endl;
        p++;
    }

    // 分隔符
    cout<<"-------------------------------------------------" << endl;

    // 遍历方法二
    for (int i = 0; i < 3; ++i) {
        cout << "姓名：" << students[i].name << endl;
        cout << "年龄：" << students[i].age << endl;
        cout << "性别：" << students[i].gender << endl;
        cout << "分数：" << students[i].score << endl;
    }

}
