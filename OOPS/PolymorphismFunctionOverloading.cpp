#include<iostream>
using namespace std;

class A{

    public:
    void sayHello() {
        cout<<"Hello Nimrat"<<endl;
    }

/*   ERROR--------
    int sayHello() {
        cout<<"Hello Nimrat"<<endl;
        return 1;
    }
        */
    
    
    int sayHello(string name, int n) {
        cout<<"Hello Nimrat"<<endl;
        return n;
    }

    void sayHello(char name) {
        cout<<"Hello "<<name<<endl;
    }


    void sayHello(string name) {
        cout<<"Hello "<<name<<endl;
    }

};



int main()  {

    A obj;
    obj.sayHello();


    return 0;
}