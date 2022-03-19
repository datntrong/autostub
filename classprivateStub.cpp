#include<iostream>
using namespace std;
class A_private{
    public:
        int i;
        A_private(){
            this -> i = 2;
        }
    private:
        int foo(int a){
            cout<<"I am A_foo_int"<<endl;
            return 0;
        }
        int foo(double a){
            cout<<"I am A_foo-double"<<endl;
            return 0;
        }
    public:
        int length (int a,double b){
            if(foo(a)){
                cout << 1 << endl;
            }
            else {
                cout << -1<<endl;
            }

            if(foo(b)){
                cout << 1 << endl;
            }
            else {
                cout << -1<<endl;
            }
            return 0;
        }

};



int uutFunc(int a, double b) {
    A_private objA;
    if (objA.length(a,b)) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    if (objA.length(a,b)) {
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

int main(){
    int a = uutFunc(3,4);
}
