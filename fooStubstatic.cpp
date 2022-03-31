#include <iostream>
using namespace std;

void sayHello(){
    cout << "Hello" << endl;
}

static int return0(){
    return 0;
}

static int return1(){
    return 1;
}

int foo1_static(int a){
    int b[2] = {a, a + 1};
    int tmp = return0();
    if(tmp == -1){
        return a;
    } else {
        return 0;
    }
}

int foo2_static(int a){
    sayHello();
    int tmp = return0(), tmp2 = return0()*2, tmp3 = return0()-6+return1();
    tmp = return1();
    tmp = return0() + return1();
    if(tmp == -1){
        cout<< "if true";
        return a;
    } else {
        cout<< "if false";
        if(return0() == -2){
            return a + 1;
        } else {
            return 0;
        }
    }

}