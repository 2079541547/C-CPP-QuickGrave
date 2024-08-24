#include <iostream>  // 引入C++的标准输入输出库
#include <cstdio>    // 引入C语言的标准输入输出库

using namespace std; // 告诉编译器使用std命名空间

int main() {
    // 1. 条件语句
    // 使用if语句判断一个数是否大于0
    int number = 10;  // 声明并初始化一个整型变量number

    // C++风格的if语句
    if (number > 0) {  // 检查number是否大于0
        cout << "这个数是正数（C++风格）." << endl;  // 如果大于0，输出“这个数是正数（C++风格）.”
    } else if (number == 0) {  // 如果number等于0
        cout << "这个数是零（C++风格）." << endl;  // 输出“这个数是零（C++风格）.”
    } else {  // 如果number小于0
        cout << "这个数是负数（C++风格）." << endl;  // 输出“这个数是负数（C++风格）.”
    }

    // C风格的if语句
    if (number > 0) {  // 检查number是否大于0
        printf("这个数是正数（C风格）.\n");  // 如果大于0，输出“这个数是正数（C风格）.”
    } else if (number == 0) {  // 如果number等于0
        printf("这个数是零（C风格）.\n");  // 输出“这个数是零（C风格）.”
    } else {  // 如果number小于0
        printf("这个数是负数（C风格）.\n");  // 输出“这个数是负数（C风格）.”
    }

    // 2. 循环
    // 使用for循环打印数字0到9
    // C++风格的for循环
    cout << "打印数字0到9（C++风格）:" << endl;  // 输出提示信息
    for (int i = 0; i < 10; ++i) {  // 外层循环，i从0到9
        cout << i << endl;  // 输出当前i的值
    }

    // C风格的for循环
    printf("打印数字0到9（C风格）: \n");  // 输出提示信息
    for (int i = 0; i < 10; ++i) {  // 外层循环，i从0到9
        printf("%d\n", i);  // 输出当前i的值
    }

    // 使用while循环打印数字0到9
    // C++风格的while循环
    int j = 0;  // 声明并初始化一个整型变量j
    cout << "使用while循环打印数字0到9（C++风格）:" << endl;  // 输出提示信息
    while (j < 10) {  // 当j小于10时执行循环
        cout << j << endl;  // 输出当前j的值
        ++j;  // 自增j
    }

    // C风格的while循环
    j = 0;  // 重新初始化j为0
    printf("使用while循环打印数字0到9（C风格）: \n");  // 输出提示信息
    while (j < 10) {  // 当j小于10时执行循环
        printf("%d\n", j);  // 输出当前j的值
        ++j;  // 自增j
    }

    // 返回0表示程序成功结束
    return 0;
}