/*
 * 1.2 节练习
 *
 * 练习 1.5：我们将所有输出操作放在一条很长的语句中。
 * 重写程序，将每个运算对象的打印操作放在一条独立的语句中。
 */

//改写1.2节主程序
#include <iostream>

int main() {
    std::cout << "Enter two numbers: ";
    std::cout << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2;
    std::cout << std::endl;
    return 0;
}
