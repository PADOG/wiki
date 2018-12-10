/*
 * 1.5.1 节练习
 *
 * 练习 1.20：在网站 http://www.informit.com/title/0321714113 上，第 1 章的代
 * 码目录中包含了头文件 Sales_item.h。将它拷贝到你自己的工作目录中。用它编写一
 * 个程序，读取一组书籍销售记录，将每条记录打印到标准输出上。
 */

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book;
    while (std::cin >> book)
        std::cout << book <<std::endl;
    return 0;
}
