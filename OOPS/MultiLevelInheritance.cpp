#include<iostream>
using namespace std;



class Animal {
    public:
    int age;
    int weight;


    public:
    void speak() {
        cout<<"Speaking"<<endl;
    }

};


class Dog: public Animal {

};


class GermanSheperd: public Dog{

};


int main() {

    GermanSheperd G;
    G.speak();

    return 0;
}