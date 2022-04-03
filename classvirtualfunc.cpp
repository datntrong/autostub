#include<iostream>
using namespace std;
class A_virtual{
    int i;
public:
    virtual int ret0_virtual(int a){
        cout<<"I am A_ret0_virtual"<<endl;
        return 0;
    }
    virtual int ret1_virtual(){
        cout<<"I am A_ret1_virtual"<<endl;
        return 1;
    }
};

class B_virtual:A_virtual{
    public:
    int ret0_virtual(int a){
        cout<<"I am A_ret0_virtual"<<endl;
        return 0;
    }
    int ret1_virtual(){
        cout<<"I am A_ret1_virtual"<<endl;
        return 1;
    }
};

int uutFuncvirtual(int a, double b) {
    A_virtual objA;
    if (objA.ret0_virtual(a)) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    if (objA.ret1_virtual()) {
        cout << 2 << endl;
    } else {
        cout << -2 << endl;
    }
    return 0;
    //   obj.fun1(); // Allowed
    //   obj.fun2(); // Allowed
    //   A::fun1(); // Error!
    //   A::fun2(); // Allowed
}

int multipleReferencevirtual(int a, double b) {
    A_virtual objA;
    B_virtual obj;
    if (obj.ret0_virtual(a) == 2) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    if (obj.ret0_virtual(a) == 2) {
        cout << 2 << endl;
    } else {
        cout << -2 << endl;
    }

    if (objA.ret1_virtual() == 6) {
        cout << 2 << endl;
    } else {
        cout << -2 << endl;
    }
    return 0;

}