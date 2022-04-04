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

static int return1_static_para(int a){
    return 1;
}
static int return0_static_para(int a){
    return 0;
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
        cout<< "if true";
        return a;
    } else {
        cout<< "if false";
        if(return0_static() == -2){
            return a + 1;
        } else {
            return 0;
        }
    }

}
int foo2_static_para(int a){
    sayHello1();
    int tmp = return0_static_para(a), tmp2 = return0_static_para(a)*2, tmp3 = return0_static_para(a)-6+return1_static_para(a);
    tmp = return1_static_para(a);
    tmp = return0_static_para(a) + return1_static_para(a);
    if(tmp == -1){
        cout<< "if true";
        return a;
    } else {
        cout<< "if false";
        if(return0_static_para(a) == -2){
            return a + 1;
        } else {
            return 0;
        }
    }

}