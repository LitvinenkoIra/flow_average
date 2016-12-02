#ifndef FLOWAVG_H
#define FLOWAVG_H


class FlowAvg{
public:
    FlowAvg();
    double getAvg();
    void process(long value);
private:
    double avg;
    int n;
};

#endif // FLOWAVG_H
