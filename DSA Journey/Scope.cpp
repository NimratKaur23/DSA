#include<iostream>
using namespace std;
int main() {
    int a=3;
    cout<<a<<endl;

    if(true) {
        int a=5;
        int b=1;
        cout<<a<<endl;
    }

    cout<<a<<endl;
   // cout<<b<<endl;   //throw error coz b is not decalred here
   int i=8;

   for(/*int i=0*/;i<8;i++) {
    cout<<"HI"<<endl;
   }
}