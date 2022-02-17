#include <iostream>
#include "stubFunc.h"
using namespace std;

int ex1(int a){
    int b[2] = {a, a + 1};
    int tmp = exReturn0();
    if(tmp == -1){
        return a;
    } else {
        return 0;
    }
}

int ex2(int a){
    exSayHello();
    int tmp = exReturn0(), tmp2 = exReturn0()*2, tmp3 = exReturn0()-6+exReturn1();
    tmp = exReturn1();
    tmp = exReturn0() + exReturn1();
    if(tmp == -1){
        return a;
    } else {
        if(exReturn0() == -2){
            return a + 1;
        } else {
            return 0;
        }
    }

}

int ex3(int a){
    int tmp = a;
    if(tmp == 1){
        return a;
    } else {
        return 0;
    }
}
