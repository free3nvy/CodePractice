#include <iostream>
#include "sales_item.h"


int main(){
    // compute sum
    Sales_item book1, book2;
    std::cin >> book1 >> book2;
    if (book1.isbn() == book2.isbn())
    {
        std::cout << book1 + book2;
        return 0;
    }
    else{
        return -1;
    }
    

}