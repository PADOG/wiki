/*
 * 1.4.1 节练习
 *
 * 练习 1.11：编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所
 * 有整数。
 */

#include <iostream>

int main() {
    std::cout << "Enter two number(int): " << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    int i = v1;
    while (i < v2) {
        std::cout << i << " " ;
        ++i
    }
    int i = v1;
    while (i > v2) {
        std::cout << i << " ";
        --i;
    }
    std::cout << v2;
    return 0;
}
