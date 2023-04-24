#include <iostream>
using namespace std;
class Average {
public:
    float averageMethod(int x, int y) {
        return 0;
    }
    float averageMethod(float x, float y, float z) {
        return abs(x + y + z)/3.0;
    }
};
float maxAbsaverage2Numberand3Number(int a,int b, int c){
    Average average;
    if(average.averageMethod(a,b)<=average.averageMethod(a,b,c)){
        float av = average.averageMethod(a,b,c);
        return av;
    }
    else{
        float av = average.averageMethod(a,b);
        return av;
    }
}