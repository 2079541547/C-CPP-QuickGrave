#include <iostream>      // 标准输入输出
#include <vector>        // 动态数组
#include <list>          // 双向链表
#include <deque>         // 双端队列
#include <set>           // 有序集合
#include <map>           // 键值对映射
#include <algorithm>     // 算法
#include <iterator>      // 迭代器

using namespace std;

// 示例：使用 vector 容器
void useVector() {
    vector<int> vec = {1, 2, 3, 4, 5};  // 初始化 vector
    cout << "初始 vector: ";
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    // 使用迭代器插入元素
    vec.insert(vec.begin(), 0);
    cout << "插入元素后 vector: ";
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    // 使用迭代器删除元素
    vec.erase(vec.begin());
    cout << "删除元素后 vector: ";
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
}

// 示例：使用 list 容器
void useList() {
    list<int> lst = {1, 2, 3, 4, 5};  // 初始化 list
    cout << "初始 list: ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // 使用迭代器插入元素
    lst.push_front(0);
    cout << "插入元素后 list: ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;

    // 使用迭代器删除元素
    lst.pop_front();
    cout << "删除元素后 list: ";
    for (int elem : lst) {
        cout << elem << " ";
    }
    cout << endl;
}

// 示例：使用 deque 容器
void useDeque() {
    deque<int> deq = {1, 2, 3, 4, 5};  // 初始化 deque
    cout << "初始 deque: ";
    for (int elem : deq) {
        cout << elem << " ";
    }
    cout << endl;

    // 使用迭代器插入元素
    deq.push_front(0);
    cout << "插入元素后 deque: ";
    for (int elem : deq) {
        cout << elem << " ";
    }
    cout << endl;

    // 使用迭代器删除元素
    deq.pop_front();
    cout << "删除元素后 deque: ";
    for (int elem : deq) {
        cout << elem << " ";
    }
    cout << endl;
}

// 示例：使用 set 容器
void useSet() {
    set<int> st = {5, 3, 1, 4, 2};  // 初始化 set
    cout << "初始 set: ";
    for (int elem : st) {
        cout << elem << " ";
    }
    cout << endl;

    // 插入元素
    st.insert(6);
    cout << "插入元素后 set: ";
    for (int elem : st) {
        cout << elem << " ";
    }
    cout << endl;

    // 删除元素
    st.erase(1);
    cout << "删除元素后 set: ";
    for (int elem : st) {
        cout << elem << " ";
    }
    cout << endl;
}

// 示例：使用 map 容器
void useMap() {
    map<string, int> mp = {{"one", 1}, {"two", 2}, {"three", 3}};  // 初始化 map
    cout << "初始 map: ";
    for (const auto &pair : mp) {
        cout << pair.first << ": " << pair.second << " ";
    }
    cout << endl;

    // 插入元素
    mp["four"] = 4;
    cout << "插入元素后 map: ";
    for (const auto &pair : mp) {
        cout << pair.first << ": " << pair.second << " ";
    }
    cout << endl;

    // 删除元素
    mp.erase("one");
    cout << "删除元素后 map: ";
    for (const auto &pair : mp) {
        cout << pair.first << ": " << pair.second << " ";
    }
    cout << endl;
}

// 示例：使用 STL 算法
void useAlgorithms(vector<int> &vec) {
    // 排序
    sort(vec.begin(), vec.end());
    cout << "排序后的 vector: ";
    for (int elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    // 查找
    auto it = find(vec.begin(), vec.end(), 3);
    if (it != vec.end()) {
        cout << "找到元素 3 在位置: " << distance(vec.begin(), it) << endl;
    } else {
        cout << "元素 3 未找到" << endl;
    }

    // 复制
    vector<int> vecCopy(vec.size());
    copy(vec.begin(), vec.end(), vecCopy.begin());
    cout << "复制后的 vector: ";
    for (int elem : vecCopy) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    // 使用 vector 容器
    useVector();

    // 使用 list 容器
    useList();

    // 使用 deque 容器
    useDeque();

    // 使用 set 容器
    useSet();

    // 使用 map 容器
    useMap();

    // 使用 STL 算法
    vector<int> vec = {1, 2, 3, 4, 5};
    useAlgorithms(vec);

    // 返回0表示程序成功结束
    return 0;
}