/*
 * 1.4.2 节练习
 *
 * 练习 1.13：使用 for 循环重做 1.4.1 节中的所有练习（第 11 页）。
 */

#include <iostream>

int main() {
    // sum(50, 100)
    int sum = 0;
    for (int val = 50; val <= 100; ++val)
        sum += val;
    std::cout << sum << std::endl;
    
    // 递减打印 10 到 0 之间的整数
    for (int val = 10; val >= 0; --val)
        std::cout << val << " ";
    std::cout << std::endl;

    // 提示用户输入两个整数，打印输入间范围内的所有整数
    std::cout << "Enter two number(int): " << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    for (int val = v1; val < v2; ++val)
        std::cout << val << " ";
    for (int val = v1; val > v2; --val)
        std::cout << val << " ";
    std::cout << v2 << std::endl;

    // end
    return 0;
}
