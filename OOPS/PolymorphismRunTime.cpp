#include<iostream>
using namespace std;


class Animal{
    public:
    void speak() {
        cout<<"SPEAKING"<<endl;
    }
};


class Dog: public Animal{

    //METHOD OVERRIDING
    public:
    void speak() {
        cout<<"BARKING"<<endl;
    }
};



int main() {

    Dog d;
    d.speak();



    return 0;
}