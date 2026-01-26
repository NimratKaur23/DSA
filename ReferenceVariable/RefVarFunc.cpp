#include<iostream>
using namespace std;

//call by value
void update1(int n) {
    n++; 
}


//call by reference
void update2(int &n) {
    n++;
}



/*
//BAD PRACTICE
int& func(int a) {
    int num=a;  ///scope is local
    int& ans=num;  //scope is local
    return ans;
}
    */



int main() {

    int n=5;
    cout<<"Before: "<<n<<endl;
    update1(n);
    cout<<"After: "<<n<<endl;

    update2(n);
    cout<<"Value: "<<n<<endl;


    return 0;
}