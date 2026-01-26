#include<iostream>
using namespace std;

int main() {

    int i=5;
    int* p=&i;
    int** q=&p;

    cout<<"Content at i:"<<endl;
    cout<<"Value: "<<*p<<endl;
    cout<<"Value: "<<i<<endl;
    cout<<"Value: "<<**q<<endl;

    cout<<"Content at p:"<<endl;
    cout<<"Value: "<<&i<<endl;
    cout<<"Value: "<<p<<endl;
    cout<<"Value: "<<*q<<endl;

    cout<<"Content at q: "<<endl;
    cout<<"Value: "<<&p<<endl;
    cout<<"Value: "<<q<<endl;




    return 0;
}