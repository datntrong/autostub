#include <iostream>
using namespace std;
class Person {
public:
    Person(){
    }
    void sayHello(){
        cout << "Hello Person";
    }
    virtual int foo(){
        return 0;
    }

    

};

class Student : public Person {
  public:  
    Student(){
    }
    void sayHello(){
        cout << "Hello Student";
    }

    int foo(){
        return 1;
    }
};

int main(){
	
    Person *ps = new Student();
   
    ps->sayHello();
}
int test(int a){
    
   // st1.sayHello();
    Person *ps = new Student();
    int tmp = ps->foo();
    if (tmp == 20){
        cout<<"di vao dong if true";

    }
    else if (tmp == 1){
        cout<<"Toi la Student";

    }
    else if (tmp ==0 ){
        cout<<"Toi la Person";
    }
    else {
        cout<<"di vao dong if false";
    }
}
