#include<iostream>

using namespace std;


typedef int_fast16_t   sc_short;
typedef uint_fast16_t  sc_ushort;
typedef int32_t        sc_integer;
typedef int16_t		   sc_int16;
typedef double         sc_real_double;
typedef bool           sc_boolean;

typedef intptr_t       sc_eventid;
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
        sc_boolean ret_sc_boolean(int a){
            return 1;
        }
        sc_real_double ret_sc_real_double(int a){
            return 1.01
        }
        sc_int16 ret_sc_int16(int a){
            return 10;
        }
        sc_integer ret_sc_integer(int a){
            return 10;
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
            return 0;
        }
        static int ret6() {
            cout << a << endl; // Acceptable
            return 0;
            //   cout << b; // Error!
        }
         int ret7(int a){
            return 7;
        }
        int ret8(int a, double b){
            return 8;
        }

        A retA(){
            return this->objA;
        }
};

int B::a = 0; // Initialization of static variable 'a'
int uutFunc_multiparameter(int a, int b) {
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
    int temp_a = 5;
    double temp_b = 5.00;
    if (obj.ret7(temp_a)) {
        cout << "call ret7    2" << endl;
    } else {
        cout << "call ret7    2" << endl;
    }
    if (obj.ret8(temp_a,temp_b)) {
        cout << "call ret8    2" << endl;
    } else {
        cout << "call ret8    -2" << endl;
    }
    return 0;
    //   obj.fun1(); // Allowed
    //   obj.fun2(); // Allowed
    //   A::fun1(); // Error!
    //   A::fun2(); // Allowed
}
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

    if(objA.ret_sc_boolean(a)){
        cout<<'123456';
    }
    else {
        cout<<"112233";
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
