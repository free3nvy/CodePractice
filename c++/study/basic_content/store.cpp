#include <iostream>
#include "sales_item.h"

int main(){
    Sales_item total;
    
    if(std::cin >> total){
        Sales_item trans;
        while (std::cin >> trans)
        {
            if(trans.isbn() == total.isbn())
                total += trans;
            else
                std::cout << total << std::endl;
                total = trans;

        }
        std::cout << total;
    }
    else{
        std::cout << "No data!" << std::endl;
        return -1;
    }

}