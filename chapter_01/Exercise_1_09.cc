/*
 * 1.4.1 节练习
 *
 * 练习 1.9：编写程序，使用 while 循环将 50 到 100 的整数相加。
 */

#include <iostream>

int main() {
    int sum = 0, i = 50;
    while (i <= 100) {
        sum += i;
        ++i;
    }
    std::cout << sum;
    return 0;
}
