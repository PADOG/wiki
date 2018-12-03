/*
 * 1.2 节练习
 *
 * 练习 1.6：解释下面片段是否合法。
 *  std::cout << "The sum of " << v1;
 *            << " and " << v2;
 *            << " is " << v1 + v2 << std::endl;
 * 如果程序是合法的，它输出什么？如果程序不合法，原因何在？应如何修正？
 */

// 不合法。原因：<< 运算符接受两个运算对象：左侧的运算对象必须是一个 ostream 对象，右侧的运算对象是要打印的值。
// 修正如下：

#include <iostream>

int main() {
    std::cout << "Enter two number: " ;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    // 修正部分
    std::cout << "The sum of " << v1
              << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}
