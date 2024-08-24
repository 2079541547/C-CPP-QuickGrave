#include <iostream>

using namespace std;

// 定义一个简单的类
class SimpleClass {
public:
    // 公有成员变量
    int publicVar;

    // 构造函数
    SimpleClass() {
        cout << "SimpleClass构造函数被调用" << endl;
        privateVar = 0;  // 初始化私有成员
    }

    // 析构函数
    ~SimpleClass() {
        cout << "SimpleClass析构函数被调用" << endl;
    }

    // 公有成员函数
    void setPrivateVar(int value) {
        privateVar = value;
    }

    // 公有成员函数
    int getPrivateVar() const {
        return privateVar;
    }

private:
    // 私有成员变量
    int privateVar;
};

// 定义一个派生类
class DerivedClass : public SimpleClass {
public:
    // 构造函数
    DerivedClass() {
        cout << "DerivedClass构造函数被调用" << endl;
    }

    // 析构函数
    ~DerivedClass() {
        cout << "DerivedClass析构函数被调用" << endl;
    }

    // 新增公有成员函数
    void display() const {
        cout << "私有成员的值为: " << getPrivateVar() << endl;
    }
};

// 主函数
int main() {
    // 创建一个SimpleClass对象
    SimpleClass obj1;
    obj1.publicVar = 10;
    obj1.setPrivateVar(20);

    // 输出公有成员变量
    cout << "公有成员变量的值为: " << obj1.publicVar << endl;

    // 输出私有成员变量
    cout << "私有成员变量的值为: " << obj1.getPrivateVar() << endl;

    // 创建一个DerivedClass对象
    DerivedClass obj2;
    obj2.setPrivateVar(30);

    // 调用派生类的方法
    obj2.display();

    // 返回0表示程序成功结束
    return 0;
}