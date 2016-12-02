#include <iostream>
#include <vector>
#include <chrono>
#include "flowavg.h"


int main(){
    FlowAvg f;
    while (true){
        auto before = std::chrono::system_clock::now();
        std::cin.get();
        auto after = std::chrono::system_clock::now();
        auto diff = std::chrono::duration_cast<std::chrono::microseconds>(after-before).count();
        f.process(diff);
        std::cout << f.getAvg() << std::endl;
    }
    return 0;
}





