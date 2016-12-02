#include <iostream>
#include <vector>
#include <chrono>
#include "limo/limo/test_main.hpp"
#include "flowavg.h"

double flow_avg (const std::vector<int> & input){
    FlowAvg f;
    for (auto val : input){
        f.process(val);
    }
    return f.getAvg();
}

double avg (const std::vector<int> & a) {
    return a.size() == 0 ? 0 :
                std::accumulate(a.begin(), a.end(), 0) /
                           static_cast<double>(a.size());
}

LTEST(test_flow_average) {
    LTEST(simple){
        std::vector<int> a ({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
        EXPECT_EQ(avg(a), flow_avg(a));
    };
    LTEST(empty){
        std::vector<int> a ({});
        EXPECT_EQ(avg(a), flow_avg(a));

    };
    LTEST(trivial){
        std::vector<int> a ({2});
        EXPECT_EQ(avg(a), flow_avg(a));

    };
    LTEST(trivial_negativ){
        std::vector<int> a ({-2});
        EXPECT_EQ(avg(a), flow_avg(a));

    };
    LTEST(regular){
        std::vector<int> a ({-2, 8, 80, 99, 0, -3, -5, 8, -9, 17});
        EXPECT_EQ(avg(a), flow_avg(a));

    };
};
