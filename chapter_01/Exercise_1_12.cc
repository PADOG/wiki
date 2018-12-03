/*
 * 1.4.2 节练习
 *
 * 练习 1.12：下面的 for 循环完成了什么功能？sum 的终值是多少?
 *      int sum = 0;
 *      for (int i = -100; i <= 100; ++i)
 *          sum += i;
 */

// 功能：SUM(-100, 100)
// 终值：0

#include <iostream>

int main() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    return 0;
}
