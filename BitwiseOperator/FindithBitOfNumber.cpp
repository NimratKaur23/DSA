#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the binary representation: "<<endl;
    cin>>n;

    int i;     //enter ith bit to find
    cout<<"Enter the i-th bit to find"<<endl;
    cin>>i;

    int ans= (n>>i) & 1;

    cout<<"i-th bit is: "<<ans<<endl;

    return 0;

}