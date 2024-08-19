//
// Created by Administrator on 2024/8/15.
//

#include "iostream"
using namespace std;

enum Color {
    RED=1,
    BLUE,
    GREEN
};

int main() {
    Color color = BLUE;
    cout << "Color: " << static_cast<int>(color) << endl;
    return 0;
}
