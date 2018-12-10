/*
 * 1.4.4 节练习
 *
 * 练习 1.19：修改你为 1.4.1 节练习 1.10（第 11 页）所编写的程序（打印一个范围内的数），
 * 使其能处理用户输入的第一个数比第二个数小的情况。
 */

#include <iostream>

int main() {
    std::cout << "Enter two number: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    if (v1 > v2) {
       for (int val = v2; val < v1; ++val)
           std::cout << val << " " ;
    }
    else {
        for (int val = v1; val <= v2; ++val)
            std::cout << val << " " ;
    }
    return 0;
}
