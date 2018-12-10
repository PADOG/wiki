/*
 * 1.5.2 节练习
 *
 * 练习 1.23：编写程序，读取多条销售记录，并统计每个 ISMBN（每本书）有几条销售记录。
 */

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book, sfr;
    if (std::cin >> book) {
        int cnt = 1;
        sfr = book;
        while (std::cin >> book) {
            if ( sfr.isbn() == book.isbn() )
                ++cnt;
            else {
                std::cout << sfr.isbn() << " occurs "
                          << cnt << " times." << std::endl;
                sfr = book;
                cnt = 1;
            }
        }
        std::cout << sfr.isbn() << " occurs "
                  << cnt << " time." << std::endl;
    }
    return 0;
}
