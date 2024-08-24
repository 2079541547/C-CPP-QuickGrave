#include <iostream>
#include <stdexcept>  // 引入标准异常类库

using namespace std;

// 示例函数，可能抛出异常
int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("除数不能为零");  // 抛出运行时异常
    }
    return numerator / denominator;
}

// 主函数
int main() {
    try {
        // 尝试执行可能抛出异常的代码
        int result = divide(10, 0);
        cout << "结果为: " << result << endl;
    } catch (const runtime_error& e) {  // 捕获runtime_error类型的异常
        cout << "发生异常: " << e.what() << endl;
    } catch (...) {  // 捕获所有其他类型的异常
        cout << "发生未知异常" << endl;
    }

    // 使用嵌套try-catch块
    try {
        int result = divide(10, 2);
        cout << "结果为: " << result << endl;
    } catch (const runtime_error& e) {
        cout << "发生异常: " << e.what() << endl;
    } catch (...) {
        cout << "发生未知异常" << endl;
    }

    // 模拟finally语句的行为
    try {
        int result = divide(10, 0);
        cout << "结果为: " << result << endl;
    } catch (const runtime_error& e) {
        cout << "发生异常: " << e.what() << endl;
    } catch (...) {
        cout << "发生未知异常" << endl;
    }

    // 返回0表示程序成功结束
    return 0;
}