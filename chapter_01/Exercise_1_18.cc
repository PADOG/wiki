/*
 * 1.4.4 节练习
 *
 * 练习 1.18：编译并运行本节的程序，给他输入全部都相等的值。再次运行程序，输入没有
 * 重复的值。
 */

#include <iostream>

int main() {
    // currVal 是我们正在统计的数；我们将读入的新值存入 val
    int currVal = 0, val = 0;
    // 读取第一个数，并确保确实有数据可以处理
    if (std::cin >> currVal) {
       int cnt = 1;                 // 保存我们正在处理的当前值的个数
       while (std::cin >> val) {    // 读取剩余的数
           if (val == currVal)      // 如果相同
               ++cnt;               // 将cnt值加1
           else {                   // 否则，打印前一个值的个数
               std::cout << currVal << " occurs "
                         << cnt << " times" << std::endl;
               currVal = val;       // 记住新值
               cnt = 1;             // 重置计数器
           }
       } // whlie 循环在这里结束
       // 记住打印文件中最后一个值的个数
       std::cont << currVal << " occurs "
                 << cnt << " times" << std::endl;
    } // 最外层的 if 语句在这里结束
   return 0;
}
