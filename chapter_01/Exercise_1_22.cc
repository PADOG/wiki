/*
 * 1.5.1 节练习
 *
 * 练习 1.22：编写程序，读取多个具有相同 ISBN 的销售记录，输出所有记录的和。
 */

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item sum, book;
    std::cin >> book;
    sum = book;
    while (std::cin >> book)
        sum += book;
    std::cout << sum << std::endl;
    return 0;
}
