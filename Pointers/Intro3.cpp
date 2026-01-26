#include<iostream>
using namespace std;

int main() {

    int num=5;
    int a=num;
    cout<<"Value before: "<<num<<endl;
    a++;
    cout<<"Value after: "<<num<<endl;



    cout<<"Value before: "<<num<<endl;
    int *p=&num;
    (*p)++;
    cout<<"Value after: "<<num<<endl;


    //copyig pointer
    int *q=p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    //Important concept
    int i=3;
    int *t=&i;
   // cout<<"Output: "<<(*t)++<<endl;
   *t=*t +1;
   cout<<*t<<endl;
   cout<<"Before t: "<<t<<endl;
   t=t+1;
   cout<<"After t: "<<t<<endl;







    return 0;
}