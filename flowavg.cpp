#include "flowavg.h"

FlowAvg::FlowAvg():n(0), avg(0){}

double FlowAvg::getAvg(){
    return avg;
}

void FlowAvg::process(long value){
    avg += (n++ == 0) ? value : (value - avg) / n;
}

