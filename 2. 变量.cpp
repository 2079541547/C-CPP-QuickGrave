#include <iostream>  // 引入C++的标准输入输出库
#include <cstdio>    // 引入C语言的标准输入输出库

using namespace std; // 告诉编译器使用std命名空间

int main() {
    // 1. 声明变量
    // 声明一个整型变量number
    int number;

    // 声明一个双精度浮点型变量pi
    double pi;

    // 声明一个字符型变量ch
    char ch;

    // 2. 初始化变量
    // 初始化一个整型变量age为25
    int age = 25;

    // 初始化一个双精度浮点型变量height为1.75
    double height = 1.75;

    // 初始化一个字符型变量grade为'A'
    char grade = 'A';

    // 3. 使用C++风格进行输入
    // 提示用户输入一个整数
    cout << "请输入一个整数（C++风格）: ";

    // 从控制台读取用户输入的整数，并存储到number变量中
    cin >> number;

    // 提示用户输入一个浮点数
    cout << "请输入一个浮点数（C++风格）: ";

    // 从控制台读取用户输入的浮点数，并存储到pi变量中
    cin >> pi;

    // 提示用户输入一个字符
    cout << "请输入一个字符（C++风格）: ";

    // 从控制台读取用户输入的字符，并存储到ch变量中
    cin >> ch;

    // 4. 使用C风格进行输入
    // 提示用户输入一个整数
    printf("请输入一个整数（C风格）: ");

    // 从控制台读取用户输入的整数，并存储到number变量中
    scanf("%d", &number);  // 注意：这里需要传递变量的地址

    // 提示用户输入一个浮点数
    printf("请输入一个浮点数（C风格）: ");

    // 从控制台读取用户输入的浮点数，并存储到pi变量中
    scanf("%lf", &pi);     // 注意：%lf 用于读取双精度浮点数

    // 提示用户输入一个字符
    printf("请输入一个字符（C风格）: ");

    // 从控制台读取用户输入的字符，并存储到ch变量中
    scanf(" %c", &ch);     // 注意：前面的空格用于跳过可能存在的空白字符

    // 5. 使用C++风格进行输出
    // 输出变量的值
    cout << "您输入的内容（C++风格）：" << endl;
    cout << "整数: " << number << endl;
    cout << "浮点数: " << pi << endl;
    cout << "字符: " << ch << endl;

    // 输出初始化的变量
    cout << "初始化的变量（C++风格）：" << endl;
    cout << "年龄: " << age << endl;
    cout << "身高: " << height << endl;
    cout << "成绩: " << grade << endl;

    // 6. 使用C风格进行输出
    // 输出变量的值
    printf("您输入的内容（C风格）:\n");
    printf("整数: %d\n", number);
    printf("浮点数: %lf\n", pi);
    printf("字符: %c\n", ch);

    // 输出初始化的变量
    printf("初始化的变量（C风格）:\n");
    printf("年龄: %d\n", age);
    printf("身高: %lf\n", height);
    printf("成绩: %c\n", grade);

    // 返回0表示程序成功结束
    return 0;
}