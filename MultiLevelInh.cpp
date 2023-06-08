//****************MULTI-LEVEL INHERITANCE ***************
//In multi level inheritance the parent class is derived in child class and child class derived in next child class
//Syntax:  class A{
//          };
//          class B : public A{
//          };
//          class C : public B{
//          };

#include<iostream>
using namespace std;
class A{
 public:
     void Afun() {
     cout<<"This is A function\n";
     }
};
class B : public A{
public:
    void Bfun() {
    cout<<"This is B Function\n";
    }
};
class C : public B{
public:

};
int main() {
    C c;
    c.Afun();
    c.Bfun();

    return 0;
}
