#include <iostream>
using namespace std;

void sayHello(){
    cout << "Hello" << endl;
}

int return0(){
    return 0;
}

int return1(){
    return 1;
}

int foo1(int a){
    int b[2] = {a, a + 1};
    int tmp = return0();
    if(tmp == -1){
        return a;
    } else {
        return 0;
    }
}

int return0_para(int a){
    return 0;
}

int return1_para(int ){
    return 1;
}

int return0_2_para(int a,int b){
    
    return 0;
}

int foo2(int a){
    sayHello();
    int tmp = return0(), tmp2 = return0()*2, tmp3 = return0()-6+return1();
    tmp = return1();
    tmp = return0() + return1();
    if(tmp == -1){
        return a;
    } else {
        if(return0() == -2){
            return a + 1;
        } else {
            return 0;
        }
    }

}


int foo2_para(int a){
    sayHello();
    int tmp = return0_para(a), tmp2 = return0_para(a)*2, tmp3 = return0_para(a)-6+return1();
    tmp = return1_para(a);
    tmp = return0_para(a) + return1();
    if(tmp == -1){
        return a;
    } else {
        if(return0_para(a) == -2){
            return a + 1;
        } else {
            return 0;
        }
    }

}


int foo2_para(int a,int b){
    sayHello();
    int tmp = return0_2_para(a,b), tmp2 = return0_para(a)*2, tmp3 = return0_para(a)-6+return1();
    tmp = return1_para(a);
    tmp = return0_para(a) + return1();
    if(tmp == -1){
        return a;
    } else {
        if(return0_para(a) == -2){
            return a + 1;
        } else {
            return 0;
        }
    }

}
int foo3(int a){
    int tmp = a;
    if(tmp == 1){
        return a;
    } else {
        return 0;
    }
}
