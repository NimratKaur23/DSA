#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number in binary: "<<endl;
    cin>>n;

    int ans=n&1;

    if(ans==0) {
        cout<<"Number is even"<<endl;
    }
    else {
        cout<<"Number is odd"<<endl;
}
}