#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    bool isPrime=true;
    for(int i=2;i<=n-1;i++) {
        if(n%i==0) {
            isPrime=false;
        }
    }

    if(isPrime) {
        cout<<"Number is prime"<<endl;
    }
    else {
        cout<<"Number is not prime"<<endl;
    }
}