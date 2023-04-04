#include <iostream>
using namespace std;
class Person {
public:
    Person(){
    }
    void sayHello(){
        cout << "Hello Person";
    }
    int foo(){
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
	
    Student st1;
   // st1.sayHello();
    Person *ps;
    ps = &st1;
    ps->sayHello();
}