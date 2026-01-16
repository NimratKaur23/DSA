#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the decimal number: "<<endl;
    cin>>n;

    int count=0;

    while(n!=0) {
        int rem=n%2;
        n=n/2;
        if(rem==1) {
            count++;
        }
    }

    cout<<"Number of 1's or set bits: "<<count<<endl;

}