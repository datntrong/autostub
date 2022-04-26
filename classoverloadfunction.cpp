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
    int foo(long a){
        cout<<"I am A_foo_long"<<endl;
        return 0;
    }
    int foo_1(string a){
        cout<<"I am A_foo_1_string"<<endl;
        return 0;    
    }
    int foo_1(char a){
        cout<<"I am A_foo_1_char"<<endl;
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
    if (objA.foo(a) == 1) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    if (objA.foo(b) == 2) {
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

int uutFuncoverload(string a, char b) {
    A_overload objA;
    if (objA.foo_1(a) == 1) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    if (objA.foo_1(b) == 2) {
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

// int foo_stub_int(void* obj,int a)
// {   
//     A* o= (A*)obj;
//     cout<<"I am foo_stub_int"<< a << endl;
//     return 0;
// }

// int foo_stub_double(void* obj,double a)
// {   
//     A* o= (A*)obj;
//     cout<<"I am foo_stub_double"<< a << endl;
//     return 0;
// }

// int main()
// {
//     Stub stub;
//     stub.set((int(A::*)(int))ADDR(A,foo), foo_stub_int);
//     stub.set((int(A::*)(double))ADDR(A,foo), foo_stub_double);
//     A a;
//     a.foo(5);
//     a.foo(1.1);
//     return 0;
// }