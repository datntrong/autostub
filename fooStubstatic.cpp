#include <iostream>
using namespace std;

void sayHello1(){
    cout << "Hello" << endl;
}

static int return0_static(){
    return 0;
}

static int return1_static(){
    return 1;
}

int foo1_static(int a){
    int b[2] = {a, a + 1};
    int tmp = return0_static();
    if(tmp == -1){
        return a;
    } else {
        return 0;
    }
}

int foo2_static(int a){
    sayHello1();
    int tmp = return0_static(), tmp2 = return0_static()*2, tmp3 = return0_static()-6+return1_static();
    tmp = return1_static();
    tmp = return0_static() + return1_static();
    if(tmp == -1){
        return a;
    } else {
        if(return0_static() == -2){
            return a + 1;
        } else {
            return 0;
        }
    }

}