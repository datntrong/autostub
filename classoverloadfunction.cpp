#include<iostream>
using namespace std;
class A_overload{
public:
    int i;
    A_overload(){
        this -> i = 2;
    }
    int foo(int a){
        cout<<"I am A_foo_int"<<endl;
        return 0;
    }
    int foo(double a){
        cout<<"I am A_foo-double"<<endl;
        return 0;
    }
};

class B_overload {
    A_overload objA;
    public:
        B_overload(A_overload aa) // Constructor
        {
            this -> objA = aa;
        }
        int foo(int a){
            cout<<"I am B_foo_int"<<endl;
            return 0;
        }
        int foo(double a){
            cout<<"I am B_foo-double"<<endl;
            return 0;
        }


        A_overload retA(){
            return this->objA;
        }
};



int uutFuncoverload(int a, double b) {
    A_overload objA;
    if (objA.foo(a)) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    if (objA.foo(b)) {
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


int multipleReferenceoverload(int a, double b) {
    A_overload objA;
    B_overload obj(objA);
    if (obj.foo(a) == 2) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    if (obj.retA().i == 2) {
        cout << 2 << endl;
    } else {
        cout << -2 << endl;
    }

    if (obj.retA().foo(b) == 6) {
        cout << 2 << endl;
    } else {
        cout << -2 << endl;
    }
    return 0;

}