#include<iostream>
using namespace std;


class A{
    public:

    void func() {
        cout<<"I am in A"<<endl;
    }

};


class B{


    
    public:

    void func() {
        cout<<"I am in B"<<endl;
    }

};

class C: public A, public B {

};




int main() {

    C obj;
    //obj.func()  -> AMBGUITY

    obj.A::func();
    obj.B::func();



    return 0;
}