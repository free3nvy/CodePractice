#include <iostream>

int main(){
    int currVal = 0, Val = 0;

    if (std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> Val)
        {
            if(Val == currVal){
                ++cnt;
            }
            else{
                std::cout << currVal << "occurs" << cnt << "times" << std::endl;
                currVal = Val;
                cnt = 1;
            }
        }

        std::cout << currVal << " occurs" << cnt << " times" << std::endl;
        
    }
    return 0;

}