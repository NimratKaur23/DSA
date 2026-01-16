#include<iostream>
using namespace std;

int main()  {
    int n;
    cout<<"Enter decimal number: "<<endl;
    cin>>n;

    int count=0;

    while(n>0) {
        n=n>>1;
        count++;
    }

    cout<<"Number of digits in Binary format is: "<<count<<endl;

    return 0;
}