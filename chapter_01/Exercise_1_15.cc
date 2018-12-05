/*
 * 1.4.2 节练习
 *
 * 练习 1.15：编写程序，包含第 14 页“再探编译”中讨论的常见错误。熟悉编译器生成
 * 的错误信息。
 */

#include <iostream>

// 语法错误（syntax error）

// 语法错误：main的参数列表漏掉了
int main( {
        // 语法错误：endl 后使用了冒号而非分号
        std::cout << "Read each file." << std::endl:
        // 语法错误：字符串常量的两端漏掉了引号
        std::cout << Update master. << std::endl;
        // 语法错误：漏掉了第二个输出运算符
        std::cout << "Write new master." std::endl;

        // 类型错误（type error）
        int val = "hello";

        // 声明错误（declaration error）
        int v1 = 0, v2 = 0;
        std::cin >> v >> v2; // 声明错误：使用了“v”而非“v1”
        cout << v1 + v2 << std::endl; // 声明错误：cout 未定义；应该是 std::cout

        // 语法错误：return 语句漏掉了分号
        return 0
}
