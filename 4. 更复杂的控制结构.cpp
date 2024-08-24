#include <iostream>  // 引入C++的标准输入输出库
#include <cstdio>    // 引入C语言的标准输入输出库

using namespace std; // 告诉编译器使用std命名空间

int main() {
    // 1. 嵌套的条件语句
    // 声明两个整型变量
    int x = 10;
    int y = 5;

    // C++风格的嵌套条件语句
    if (x > y) {          // 判断x是否大于y
        cout << "x 大于 y (C++ 风格)." << endl;
        if (x > 10) {     // 如果x大于y，进一步判断x是否大于10
            cout << "x 大于 10 (C++ 风格)." << endl;
        }
    } else {              // 如果x不大于y
        cout << "x 不大于 y (C++ 风格)." << endl;
    }

    // C风格的嵌套条件语句
    if (x > y) {          // 判断x是否大于y
        printf("x 大于 y (C 风格).\n");
        if (x > 10) {     // 如果x大于y，进一步判断x是否大于10
            printf("x 大于 10 (C 风格).\n");
        }
    } else {              // 如果x不大于y
        printf("x 不大于 y (C 风格).\n");
    }

    // 2. 嵌套的循环
    // C++风格的嵌套for循环
    cout << "嵌套for循环 (C++ 风格):" << endl;
    for (int i = 0; i < 3; ++i) {  // 外层循环，i从0到2
        for (int j = 0; j < 3; ++j) {  // 内层循环，j从0到2
            cout << "i = " << i << ", j = " << j << endl;
        }
    }

    // C风格的嵌套for循环
    printf("嵌套for循环 (C 风格): \n");
    for (int i = 0; i < 3; ++i) {  // 外层循环，i从0到2
        for (int j = 0; j < 3; ++j) {  // 内层循环，j从0到2
            printf("i = %d, j = %d\n", i, j);
        }
    }

    // 3. switch语句
    // C++风格的switch语句
    int dayOfWeek = 2;
    switch (dayOfWeek) {  // 根据dayOfWeek的值选择不同的分支
        case 1:            // 如果dayOfWeek等于1
            cout << "今天是周一 (C++ 风格)." << endl;
            break;         // 结束switch语句
        case 2:            // 如果dayOfWeek等于2
            cout << "今天是周二 (C++ 风格)." << endl;
            break;         // 结束switch语句
        case 3:            // 如果dayOfWeek等于3
            cout << "今天是周三 (C++ 风格)." << endl;
            break;         // 结束switch语句
        default:           // 如果dayOfWeek不等于1, 2, 或3
            cout << "今天不是周一至周三 (C++ 风格)." << endl;
            break;         // 结束switch语句
    }

    // C风格的switch语句
    switch (dayOfWeek) {  // 根据dayOfWeek的值选择不同的分支
        case 1:            // 如果dayOfWeek等于1
            printf("今天是周一 (C 风格).\n");
            break;         // 结束switch语句
        case 2:            // 如果dayOfWeek等于2
            printf("今天是周二 (C 风格).\n");
            break;         // 结束switch语句
        case 3:            // 如果dayOfWeek等于3
            printf("今天是周三 (C 风格).\n");
            break;         // 结束switch语句
        default:           // 如果dayOfWeek不等于1, 2, 或3
            printf("今天不是周一至周三 (C 风格).\n");
            break;         // 结束switch语句
    }

    // 4. 逻辑运算符
    // C++风格的逻辑运算符
    bool condition1 = true;  // 声明并初始化一个布尔变量condition1为true
    bool condition2 = false; // 声明并初始化一个布尔变量condition2为false

    if (condition1 && condition2) {  // 使用&&运算符判断两个条件是否都为真
        cout << "条件1和条件2都为真 (C++ 风格)." << endl;
    } else {                         // 如果条件1和条件2不都为真
        cout << "条件1和条件2不都为真 (C++ 风格)." << endl;
    }

    if (condition1 || condition2) {  // 使用||运算符判断两个条件中是否至少有一个为真
        cout << "条件1或条件2为真 (C++ 风格)." << endl;
    } else {                         // 如果条件1和条件2都不为真
        cout << "条件1和条件2都不为真 (C++ 风格)." << endl;
    }

    if (!condition1) {               // 使用!运算符取反condition1的值
        cout << "条件1为假 (C++ 风格)." << endl;
    } else {                         // 如果condition1为真
        cout << "条件1为真 (C++ 风格)." << endl;
    }

    // C风格的逻辑运算符
    if (condition1 && condition2) {  // 使用&&运算符判断两个条件是否都为真
        printf("条件1和条件2都为真 (C 风格).\n");
    } else {                         // 如果条件1和条件2不都为真
        printf("条件1和条件2不都为真 (C 风格).\n");
    }

    if (condition1 || condition2) {  // 使用||运算符判断两个条件中是否至少有一个为真
        printf("条件1或条件2为真 (C 风格).\n");
    } else {                         // 如果条件1和条件2都不为真
        printf("条件1和条件2都不为真 (C 风格).\n");
    }

    if (!condition1) {               // 使用!运算符取反condition1的值
        printf("条件1为假 (C 风格).\n");
    } else {                         // 如果condition1为真
        printf("条件1为真 (C 风格).\n");
    }

    // 返回0表示程序成功结束
    return 0;
}