#include<iostream>

using namespace std;

class A {
    int b;
    public:
        int a;
        A(){
            this -> a = 2;
            this -> b = 2;
        }
        A(int a, int b) // Constructor
        {
            this -> a = a; // this.<var> points to the variable of
            this -> b = b; // class A while <var> is a formal parameter
        }
        int ret5() {
            return 5;
        }
        int ret6() {
            return 6;
        }
};

class B {
    static int a;
    int b;
    A objA;
    public:
        B(int a, int b, A aa) // Constructor
        {
            this -> a = a; // this.<var> points to the variable of
            this -> b = b; // class A while <var> is a formal parameter
            this -> objA = aa;
        }
        int ret5() {
            return 5;
        }
        static int ret6() {
            cout << a << endl; // Acceptable
            return 6;
            //   cout << b; // Error!
        }

        A retA(){
            return this->objA;
        }
};

int B::a = 0; // Initialization of static variable 'a'
int uutFunc(int a, int b) {
    A objA(a, b);
    B obj(a, b, objA);
    if (obj.ret5()) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    if (obj.ret6()) {
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

int multipleReference(int a, int b) {
    A objA(a, b);
    B obj(a, b, objA);
    if (obj.ret6() == 2) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    if (obj.retA().a == 2) {
        cout << 2 << endl;
    } else {
        cout << -2 << endl;
    }

    if (obj.retA().ret5() == 6) {
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
