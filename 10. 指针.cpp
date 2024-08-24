#include <iostream>  // 引入C++的标准输入输出库
#include <cstdio>    // 引入C语言的标准输入输出库

using namespace std;

// C++版本的函数，用于打印指针指向的整数
void printIntPointerCpp(int *ptr) {
    if (ptr == nullptr) {
        cout << "指针为空" << endl;
        return;
    }
    cout << "指针指向的值为: " << *ptr << endl;
}

// C++版本的函数，用于交换两个整数的值
void swapIntegersCpp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// C版本的函数，用于打印指针指向的整数
void printIntPointerC(int *ptr) {
    if (ptr == nullptr) {
        fprintf(stderr, "指针为空\n");
        return;
    }
    printf("指针指向的值为: %d\n", *ptr);
}

// C版本的函数，用于交换两个整数的值
void swapIntegersC(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // 1. 声明一个整数变量
    int num1 = 10;
    
    // 2. 声明一个指针变量，并让它指向num1
    int *pNum1 = &num1;
    
    // 3. 输出指针的值
    cout << "指针pNum1的值: " << pNum1 << endl;
    
    // 4. 输出指针指向的值
    cout << "指针pNum1指向的值: " << *pNum1 << endl;
    
    // 5. 通过指针修改变量的值
    *pNum1 = 20;
    cout << "修改后的num1值: " << num1 << endl;
    
    // 6. 调用函数printIntPointerCpp打印指针指向的值
    printIntPointerCpp(pNum1);
    
    // 7. 声明两个整数变量
    int num2 = 30;
    int num3 = 40;
    
    // 8. 声明两个指针变量，并让它们分别指向num2和num3
    int *pNum2 = &num2;
    int *pNum3 = &num3;
    
    // 9. 输出交换前的值
    cout << "交换前的值: num2 = " << num2 << ", num3 = " << num3 << endl;
    
    // 10. 调用函数swapIntegersCpp交换两个整数的值
    swapIntegersCpp(pNum2, pNum3);
    
    // 11. 输出交换后的值
    cout << "交换后的值: num2 = " << num2 << ", num3 = " << num3 << endl;
    
    // C版本的指针操作
    {
        // 1. 声明一个整数变量
        int c_num1 = 10;
        
        // 2. 声明一个指针变量，并让它指向c_num1
        int *c_pNum1 = &c_num1;
        
        // 3. 输出指针的值
        printf("指针c_pNum1的值: %p\n", c_pNum1);
        
        // 4. 输出指针指向的值
        printf("指针c_pNum1指向的值: %d\n", *c_pNum1);
        
        // 5. 通过指针修改变量的值
        *c_pNum1 = 20;
        printf("修改后的c_num1值: %d\n", c_num1);
        
        // 6. 调用函数printIntPointerC打印指针指向的值
        printIntPointerC(c_pNum1);
        
        // 7. 声明两个整数变量
        int c_num2 = 30;
        int c_num3 = 40;
        
        // 8. 声明两个指针变量，并让它们分别指向c_num2和c_num3
        int *c_pNum2 = &c_num2;
        int *c_pNum3 = &c_num3;
        
        // 9. 输出交换前的值
        printf("交换前的值: c_num2 = %d, c_num3 = %d\n", c_num2, c_num3);
        
        // 10. 调用函数swapIntegersC交换两个整数的值
        swapIntegersC(c_pNum2, c_pNum3);
        
        // 11. 输出交换后的值
        printf("交换后的值: c_num2 = %d, c_num3 = %d\n", c_num2, c_num3);
    }
    
    // 12. 指针算术运算
    int *pNum4 = new int[5];  // 动态分配一个整数数组
    for (int i = 0; i < 5; ++i) {
        pNum4[i] = i * 10;
    }
    
    // 13. 输出数组中的值
    cout << "数组中的值: ";
    for (int *p = pNum4; p < pNum4 + 5; ++p) {
        cout << *p << " ";
    }
    cout << endl;
    
    // 14. 释放动态分配的内存
    delete[] pNum4;
    
    // 返回0表示程序成功结束
    return 0;
}