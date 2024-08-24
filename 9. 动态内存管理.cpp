#include <iostream>  // 引入C++的标准输入输出库
#include <cstdio>    // 引入C语言的标准输入输出库
#include <cstdlib>   // 引入C语言的stdlib库，用于malloc等函数
#include <cstring>   // 引入C语言的字符串处理库
#include <memory>    // 引入C++的智能指针库

using namespace std;

// C++版本的内存分配和释放函数
void memoryManagementCpp() {
    // 使用malloc分配内存
    int *array = static_cast<int*>(malloc(sizeof(int) * 10));
    if (array == nullptr) {  // 检查内存分配是否成功
        cerr << "内存分配失败" << endl;
        return;
    }

    // 初始化数组
    for (int i = 0; i < 10; ++i) {
        array[i] = i;
    }

    // 打印数组
    cout << "使用malloc分配的数组内容：" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    // 重新分配内存
    int *newArray = static_cast<int*>(realloc(array, sizeof(int) * 20));
    if (newArray == nullptr) {  // 检查内存重新分配是否成功
        cerr << "内存重新分配失败" << endl;
        free(array);  // 释放原始内存
        return;
    }

    // 释放原始指针
    free(array);

    // 初始化新数组的剩余部分
    for (int i = 10; i < 20; ++i) {
        newArray[i] = i;
    }

    // 打印新数组
    cout << "使用realloc重新分配的数组内容：" << endl;
    for (int i = 0; i < 20; ++i) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    // 释放内存
    free(newArray);
}

// C版本的内存分配和释放函数
void memoryManagementC() {
    // 使用malloc分配内存
    int *array = static_cast<int*>(malloc(sizeof(int) * 10));
    if (array == nullptr) {  // 检查内存分配是否成功
        fprintf(stderr, "内存分配失败\n");
        return;
    }

    // 初始化数组
    for (int i = 0; i < 10; ++i) {
        array[i] = i;
    }

    // 打印数组
    printf("使用malloc分配的数组内容：\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // 重新分配内存
    int *newArray = static_cast<int*>(realloc(array, sizeof(int) * 20));
    if (newArray == nullptr) {  // 检查内存重新分配是否成功
        fprintf(stderr, "内存重新分配失败\n");
        free(array);  // 释放原始内存
        return;
    }

    // 释放原始指针
    free(array);

    // 初始化新数组的剩余部分
    for (int i = 10; i < 20; ++i) {
        newArray[i] = i;
    }

    // 打印新数组
    printf("使用realloc重新分配的数组内容：\n");
    for (int i = 0; i < 20; ++i) {
        printf("%d ", newArray[i]);
    }
    printf("\n");

    // 释放内存
    free(newArray);
}

// C++版本的智能指针示例
void smartPointersCpp() {
    // 使用unique_ptr管理内存
    // 注意：std::unique_ptr 是C++特有的，C中没有这个概念
    std::unique_ptr<int[]> uptr(new int[10]);
    for (int i = 0; i < 10; ++i) {
        uptr[i] = i;
    }

    // 打印数组
    cout << "使用unique_ptr管理的数组内容：" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << uptr[i] << " ";
    }
    cout << endl;

    // unique_ptr会在离开作用域时自动释放内存
}

int main() {
    // C++版本的动态内存管理示例
    memoryManagementCpp();

    // C版本的动态内存管理示例
    memoryManagementC();

    // C++版本的智能指针示例
    smartPointersCpp();
    

    // 返回0表示程序成功结束
    return 0;
}