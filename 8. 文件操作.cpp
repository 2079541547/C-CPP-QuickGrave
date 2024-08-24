#include <iostream>  // 引入C++的标准输入输出库
#include <cstdio>    // 引入C语言的标准输入输出库
#include <cstdlib>   // 引入C语言的stdlib库，用于exit函数
#include <cstring>   // 引入C语言的字符串处理库

using namespace std;

// C++版本的文件打开函数
// 参数：
// - filename: 文件名
// - mode: 打开模式（例如 "r" 读取，"w" 写入）
// 返回：
// - 成功打开的文件指针，或NULL
FILE* openFileCpp(const char *filename, const char *mode) {
    FILE *file = fopen(filename, mode);  // 使用fopen函数尝试打开文件
    if (!file) {  // 检查文件是否成功打开
        cerr << "无法打开文件: " << filename << endl;  // 输出错误信息
        exit(EXIT_FAILURE);  // 终止程序
    }
    return file;  // 返回文件指针
}

// C++版本的文件关闭函数
// 参数：
// - file: 需要关闭的文件指针
void closeFileCpp(FILE *file) {
    fclose(file);  // 使用fclose函数关闭文件
}

// C++版本的文件读取函数
// 参数：
// - filename: 文件名
void readFileCpp(const char *filename) {
    FILE *file = openFileCpp(filename, "r");  // 打开文件以读取模式

    char buffer[1024];  // 定义一个缓冲区用于存储读取的数据
    while (fgets(buffer, sizeof(buffer), file)) {  // 逐行读取文件
        cout << buffer;  // 输出每一行到控制台
    }

    closeFileCpp(file);  // 关闭文件
}

// C++版本的文件写入函数
// 参数：
// - filename: 文件名
// - content: 需要写入的内容
void writeFileCpp(const char *filename, const char *content) {
    FILE *file = openFileCpp(filename, "w");  // 打开文件以写入模式

    if (fwrite(content, strlen(content), 1, file) != 1) {  // 尝试写入内容
        cerr << "写入文件失败: " << filename << endl;  // 写入失败时输出错误信息
        exit(EXIT_FAILURE);  // 终止程序
    }

    closeFileCpp(file);  // 关闭文件
}

// C++版本的文件追加函数
// 参数：
// - filename: 文件名
// - content: 需要追加的内容
void appendToFileCpp(const char *filename, const char *content) {
    FILE *file = openFileCpp(filename, "a");  // 打开文件以追加模式

    if (fwrite(content, strlen(content), 1, file) != 1) {  // 尝试追加内容
        cerr << "追加文件失败: " << filename << endl;  // 追加失败时输出错误信息
        exit(EXIT_FAILURE);  // 终止程序
    }

    closeFileCpp(file);  // 关闭文件
}

// C版本的文件打开函数
// 参数：
// - filename: 文件名
// - mode: 打开模式（例如 "r" 读取，"w" 写入）
// 返回：
// - 成功打开的文件指针，或NULL
FILE* openFileC(const char *filename, const char *mode) {
    FILE *file = fopen(filename, mode);  // 使用fopen函数尝试打开文件
    if (!file) {  // 检查文件是否成功打开
        fprintf(stderr, "无法打开文件: %s\n", filename);  // 输出错误信息
        exit(EXIT_FAILURE);  // 终止程序
    }
    return file;  // 返回文件指针
}

// C版本的文件关闭函数
// 参数：
// - file: 需要关闭的文件指针
void closeFileC(FILE *file) {
    fclose(file);  // 使用fclose函数关闭文件
}

// C版本的文件读取函数
// 参数：
// - filename: 文件名
void readFileC(const char *filename) {
    FILE *file = openFileC(filename, "r");  // 打开文件以读取模式

    char buffer[1024];  // 定义一个缓冲区用于存储读取的数据
    while (fgets(buffer, sizeof(buffer), file)) {  // 逐行读取文件
        printf("%s", buffer);  // 输出每一行到控制台
    }

    closeFileC(file);  // 关闭文件
}

// C版本的文件写入函数
// 参数：
// - filename: 文件名
// - content: 需要写入的内容
void writeFileC(const char *filename, const char *content) {
    FILE *file = openFileC(filename, "w");  // 打开文件以写入模式

    if (fwrite(content, strlen(content), 1, file) != 1) {  // 尝试写入内容
        fprintf(stderr, "写入文件失败: %s\n", filename);  // 写入失败时输出错误信息
        exit(EXIT_FAILURE);  // 终止程序
    }

    closeFileC(file);  // 关闭文件
}

// C版本的文件追加函数
// 参数：
// - filename: 文件名
// - content: 需要追加的内容
void appendToFileC(const char *filename, const char *content) {
    FILE *file = openFileC(filename, "a");  // 打开文件以追加模式

    if (fwrite(content, strlen(content), 1, file) != 1) {  // 尝试追加内容
        fprintf(stderr, "追加文件失败: %s\n", filename);  // 追加失败时输出错误信息
        exit(EXIT_FAILURE);  // 终止程序
    }

    closeFileC(file);  // 关闭文件
}

int main() {
    const char *testFileName = "test.txt";  // 测试文件名
    const char *testContent = "Hello, world!\n";  // 测试内容

    // C++版本的文件写入示例
    {
        writeFileCpp(testFileName, testContent);  // 将内容写入文件
        cout << "内容已写入文件: " << testFileName << endl;  // 输出提示信息
    }

    // C++版本的文件读取示例
    {
        readFileCpp(testFileName);  // 从文件中读取内容
        cout << "文件内容已读取完毕." << endl;  // 输出提示信息
    }

    // C++版本的文件追加示例
    {
        const char *appendContent = "Goodbye, world!\n";  // 追加的内容
        appendToFileCpp(testFileName, appendContent);  // 将内容追加到文件
        cout << "内容已追加到文件: " << testFileName << endl;  // 输出提示信息
    }

    // C++版本的再次读取文件内容示例
    {
        readFileCpp(testFileName);  // 再次从文件中读取内容
        cout << "文件内容已读取完毕." << endl;  // 输出提示信息
    }

    // C版本的文件写入示例
    {
        writeFileC(testFileName, testContent);  // 将内容写入文件
        printf("内容已写入文件: %s\n", testFileName);  // 输出提示信息
    }

    // C版本的文件读取示例
    {
        readFileC(testFileName);  // 从文件中读取内容
        printf("文件内容已读取完毕.\n");  // 输出提示信息
    }

    // C版本的文件追加示例
    {
        const char *appendContent = "Goodbye, world!\n";  // 追加的内容
        appendToFileC(testFileName, appendContent);  // 将内容追加到文件
        printf("内容已追加到文件: %s\n", testFileName);  // 输出提示信息
    }

    // C版本的再次读取文件内容示例
    {
        readFileC(testFileName);  // 再次从文件中读取内容
        printf("文件内容已读取完毕.\n");  // 输出提示信息
    }

    // 返回0表示程序成功结束
    return 0;
}