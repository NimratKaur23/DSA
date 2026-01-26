#include<iostream>
using namespace std;

int main() {


/*   DONT DO THIS
    int *p;   //pointer to int is created and poitnitng to grabage address
    cout<<*p<<endl;
    */


  /*
    int *p=0;   //null pointer
    cout<<*p<<endl;
    */



    int i=5;

    int *q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;


    int *p=0;
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;




    return 0;
}