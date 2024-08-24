#include <iostream>  // 引入C++的标准输入输出库
#include <cstdio>    // 引入C语言的标准输入输出库
#include <cstring>   // 引入C语言的字符串处理库

using namespace std; // 告诉编译器使用std命名空间

// C++版本的结构体定义
struct CPP_Person {
    char name[50];  // 姓名
    int age;        // 年龄
    float height;   // 身高
};

// C++版本的联合定义
union CPP_ContactInfo {
    char phoneNumber[20];
    char email[50];
};

// C++版本的扩展结构体定义
struct CPP_ExtendedPerson {
    CPP_Person person;  // 包含一个CPP_Person结构体
    CPP_ContactInfo contact;  // 包含一个CPP_ContactInfo联合
};

// C++版本的打印函数
void printCPP_Person(const CPP_Person &person) {
    cout << "姓名: " << person.name << endl;
    cout << "年龄: " << person.age << endl;
    cout << "身高: " << person.height << "米" << endl;
}

// C++版本的打印函数
void printCPP_ExtendedPerson(const CPP_ExtendedPerson &eperson) {
    printCPP_Person(eperson.person);  // 打印CPP_Person部分的信息
    cout << "联系方式: ";
    if (strlen(eperson.contact.phoneNumber) > 0) {
        cout << eperson.contact.phoneNumber << endl;
    } else {
        cout << eperson.contact.email << endl;
    }
}

// C版本的结构体定义
typedef struct {
    char name[50];  // 姓名
    int age;        // 年龄
    float height;   // 身高
} C_Person;

// C版本的联合定义
typedef union {
    char phoneNumber[20];
    char email[50];
} C_ContactInfo;

// C版本的扩展结构体定义
typedef struct {
    C_Person person;  // 包含一个C_Person结构体
    C_ContactInfo contact;  // 包含一个C_ContactInfo联合
} C_ExtendedPerson;

// C版本的打印函数
void printC_Person(const C_Person *person) {
    printf("姓名: %s\n", person->name);
    printf("年龄: %d\n", person->age);
    printf("身高: %.2f 米\n", person->height);
}

// C版本的打印函数
void printC_ExtendedPerson(const C_ExtendedPerson *eperson) {
    printC_Person(&eperson->person);  // 打印C_Person部分的信息
    printf("联系方式: ");
    if (strlen(eperson->contact.phoneNumber) > 0) {
        printf("%s\n", eperson->contact.phoneNumber);
    } else {
        printf("%s\n", eperson->contact.email);
    }
}

// C++版本的类定义（仅限C++）
class CPerson {
public:
    char name[50];  // 姓名
    int age;        // 年龄
    float height;   // 身高

    // 构造函数
    CPerson(const char *name, int age, float height) {
        strncpy(this->name, name, sizeof(this->name) - 1);
        this->name[sizeof(this->name) - 1] = '\0';  // 确保null终止
        this->age = age;
        this->height = height;
    }

    // 成员函数，用于打印个人信息
    void printInfo() const {
        cout << "姓名: " << name << endl;
        cout << "年龄: " << age << endl;
        cout << "身高: " << height << "米" << endl;
    }
};

// 定义一个命名空间，用于封装一些函数（仅限C++）
namespace MyNamespace {
    void printMessage(const char *message) {
        cout << message << endl;
    }
}

int main() {
    // C++版本的示例
    {
        // 创建并初始化一个CPP_Person结构体实例
        CPP_Person cpp_person1;
        strncpy(cpp_person1.name, "Alice", sizeof(cpp_person1.name) - 1);
        cpp_person1.name[sizeof(cpp_person1.name) - 1] = '\0';  // 确保null终止
        cpp_person1.age = 25;
        cpp_person1.height = 1.65f;
        cout << "C++版本的Person结构体:" << endl;
        printCPP_Person(cpp_person1);  // 调用printCPP_Person函数打印信息

        // 创建并初始化一个CPP_ContactInfo联合实例
        CPP_ContactInfo cpp_contact1;
        strncpy(cpp_contact1.email, "alice@example.com", sizeof(cpp_contact1.email) - 1);
        cpp_contact1.email[sizeof(cpp_contact1.email) - 1] = '\0';  // 确保null终止
        cout << "C++版本的ContactInfo联合:" << endl;
        cout << "电子邮件: " << cpp_contact1.email << endl;

        // 创建并初始化一个CPP_ExtendedPerson结构体实例
        CPP_ExtendedPerson cpp_eperson1 = {cpp_person1, cpp_contact1};
        cout << "C++版本的ExtendedPerson结构体:" << endl;
        printCPP_ExtendedPerson(cpp_eperson1);  // 调用printCPP_ExtendedPerson函数打印信息

        // 修改CPP_ExtendedPerson结构体实例中的联系方式
        strncpy(cpp_eperson1.contact.phoneNumber, "123-456-7890", sizeof(cpp_eperson1.contact.phoneNumber) - 1);
        cpp_eperson1.contact.phoneNumber[sizeof(cpp_eperson1.contact.phoneNumber) - 1] = '\0';  // 确保null终止
        cout << "修改后的C++版本的ExtendedPerson结构体:" << endl;
        printCPP_ExtendedPerson(cpp_eperson1);  // 再次打印信息查看更改

        // 使用C++中的类
        CPerson cperson("Bob", 30, 1.75f);
        cout << "C++中的类:" << endl;
        cperson.printInfo();  // 调用成员函数打印信息

        // 使用命名空间中的函数
        MyNamespace::printMessage("这是一个来自命名空间的消息。");
    }

    // C版本的示例
    {
        // 创建并初始化一个C_Person结构体实例
        C_Person c_person1;
        strncpy(c_person1.name, "Charlie", sizeof(c_person1.name) - 1);
        c_person1.name[sizeof(c_person1.name) - 1] = '\0';  // 确保null终止
        c_person1.age = 35;
        c_person1.height = 1.70f;
        printf("C版本的Person结构体:\n");
        printC_Person(&c_person1);  // 调用printC_Person函数打印信息

        // 创建并初始化一个C_ContactInfo联合实例
        C_ContactInfo c_contact1;
        strncpy(c_contact1.email, "charlie@example.com", sizeof(c_contact1.email) - 1);
        c_contact1.email[sizeof(c_contact1.email) - 1] = '\0';  // 确保null终止
        printf("C版本的ContactInfo联合:\n");
        printf("电子邮件: %s\n", c_contact1.email);

        // 创建并初始化一个C_ExtendedPerson结构体实例
        C_ExtendedPerson c_eperson1 = {c_person1, c_contact1};
        printf("C版本的ExtendedPerson结构体:\n");
        printC_ExtendedPerson(&c_eperson1);  // 调用printC_ExtendedPerson函数打印信息

        // 修改C_ExtendedPerson结构体实例中的联系方式
        strncpy(c_eperson1.contact.phoneNumber, "555-1234", sizeof(c_eperson1.contact.phoneNumber) - 1);
        c_eperson1.contact.phoneNumber[sizeof(c_eperson1.contact.phoneNumber) - 1] = '\0';  // 确保null终止
        printf("修改后的C版本的ExtendedPerson结构体:\n");
        printC_ExtendedPerson(&c_eperson1);  // 再次打印信息查看更改
    }

    // 返回0表示程序成功结束
    return 0;
}