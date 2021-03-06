#include<iostream>
using namespace std;

// enum enum_var {
//     one, two, three
// };

class C_overload {
    public:
        int i;
        C_overload(){
        this -> i = 2;
    }
};

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

    int foo_1(string a){
        cout<<"I am A_foo_1_string"<<endl;
        return 0;    
    }
    int foo_1(char a){
        cout<<"I am A_foo_1_char"<<endl;
        return 0;    
    }

    int foo_2(C_overload a){
        cout<<"I am A_foo_2_B_overload"<<endl;
        return 0;  
    }
    int foo_2(string b){
        cout<<"I am A_foo_2_string"<<endl;
        return 0;  
    }

    int foo_3(string a){
        cout<<"I am A_foo_3_string"<<endl;
        return 0;  
    }
    int foo_3(int *b){
        cout<<"I am A_foo_3_pointer"<<endl;
        return 0;  
    }
    float average(float age[]) {
            
            int i;
            float avg, sum = 0.0;
            for (i = 0; i < 6; ++i) {
                sum += age[i];
            }
            avg = (sum / 6);
            return avg;
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

int uutFuncoverload(float a[], float b[]) {
    A_overload objA;
    if (objA.average(a) == 1) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    if (objA.average(b) == 2) {
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

int uutFuncoverload(float a, char b) {
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

int uutFuncoverload(C_overload a, string b) {
    A_overload objA;
    if (objA.foo_2(a) == 1) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    if (objA.foo_2(b) == 2) {
        cout << 2 << endl;
    } else {
        cout << -2 << endl;
    }
    return 0;
}

int uutFuncoverload(string a, int *b) {
    A_overload objA;
    if (objA.foo_3(a) == 1) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    if (objA.foo_3(b) == 2) {
        cout << 2 << endl;
    } else {
        cout << -2 << endl;
    }
    return 0;
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