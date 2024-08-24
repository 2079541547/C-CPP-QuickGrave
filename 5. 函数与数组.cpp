#include <iostream>  // 引入C++的标准输入输出库
#include <cstdio>    // 引入C语言的标准输入输出库

using namespace std; // 告诉编译器使用std命名空间

// 1. 定义一个函数，用于计算两个整数的和
// 函数原型声明
int addNumbers(int a, int b);

// 2. 定义一个函数，用于打印数组中的所有元素
// 函数原型声明
void printArray(const int arr[], int size);

// 3. C风格的打印数组函数
// 函数原型声明
void printArrayC(const int arr[], int size);

// 4. 定义一个函数，用于计算数组中所有元素的平均值
// 函数原型声明
double calculateAverage(const int arr[], int size);

// 5. 定义一个函数，用于查找数组中的最大值
// 函数原型声明
int findMax(const int arr[], int size);

// 1. 定义addNumbers函数
// 此函数接受两个整型参数a和b，并返回它们的和
int addNumbers(int a, int b) {
    return a + b;  // 返回两数之和
}

// 2. 定义printArray函数
// 此函数接受一个整型数组arr和数组的大小size，然后打印数组中的每个元素
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;  // 打印换行符以结束一行的输出
}

// 3. 定义printArrayC函数
// 此函数接受一个整型数组arr和数组的大小size，然后打印数组中的每个元素
void printArrayC(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");  // 打印换行符以结束一行的输出
}

// 4. 定义calculateAverage函数
// 此函数接受一个整型数组arr和数组的大小size，计算并返回数组中所有元素的平均值
double calculateAverage(const int arr[], int size) {
    double sum = 0;  // 初始化求和变量
    for (int i = 0; i < size; ++i) {
        sum += arr[i];  // 累加数组中的每个元素
    }
    return sum / size;  // 返回平均值
}

// 5. 定义findMax函数
// 此函数接受一个整型数组arr和数组的大小size，查找并返回数组中的最大值
int findMax(const int arr[], int size) {
    int max = arr[0];  // 初始化最大值为数组的第一个元素
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {  // 如果当前元素比已知的最大值大
            max = arr[i];  // 更新最大值
        }
    }
    return max;  // 返回最大值
}

int main() {
    // 1. 调用addNumbers函数
    int num1 = 5;  // 声明并初始化第一个整型变量
    int num2 = 3;  // 声明并初始化第二个整型变量

    // C++风格的调用
    int sum = addNumbers(num1, num2);  // 调用addNumbers函数并将返回值赋给sum
    cout << "两数之和为: " << sum << endl;  // 输出两数之和

    // C风格的调用
    int sumC = addNumbers(num1, num2);  // 调用addNumbers函数并将返回值赋给sumC
    printf("两数之和为: %d\n", sumC);  // 输出两数之和

    // 2. 定义并初始化一个整型数组
    int numbers[] = {1, 2, 3, 4, 5};  // 声明并初始化一个整型数组
    int size = sizeof(numbers) / sizeof(numbers[0]);  // 计算数组长度

    // 3. 调用printArray函数打印数组
    cout << "数组中的元素为 (C++风格): ";
    printArray(numbers, size);  // 调用printArray函数

    // C风格的打印数组
    printf("数组中的元素为 (C风格): ");
    printArrayC(numbers, size);  // 调用printArrayC函数

    // 4. 计算数组的平均值
    double average = calculateAverage(numbers, size);
    cout << "数组的平均值为: " << average << endl;

    // 5. 查找数组中的最大值
    int maxValue = findMax(numbers, size);
    cout << "数组中的最大值为: " << maxValue << endl;

    // 返回0表示程序成功结束
    return 0;
}