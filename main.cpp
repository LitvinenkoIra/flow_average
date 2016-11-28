#include <iostream>
#include <vector>

double avg (std::vector<int> & a){
    int n = 0;
    double avg = 0;
    for (int i = 0; i < a.size(); i++){
        if (n++ == 0) {
            avg = a[0];
        }
        else {
            avg = avg + (a[i] - avg) / n;
        }
    }
}

int main(){

    return 0;
}

