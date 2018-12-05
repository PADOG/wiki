/*
 * 1.4.3 节练习
 *
 * 练习 1.16：编写程序，从 cin 读取一组数，输出其和。
 */

#include <iostream>

int main() {
    int val = 0, sum = 0;
    while(std::cin >> val)
        sum += val;
    std::cout << "Sum is : " << sum << std::endl;
    return 0;
}
