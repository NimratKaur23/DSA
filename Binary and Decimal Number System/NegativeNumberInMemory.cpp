#include<iostream>
#include<math.h>
#include<bitset>
using namespace std;


int main() {
    int n;
    cout<<"Enter negative number: "<<endl;
    cin>>n;

    bitset<32> b(n);
    cout<<"Number stored in memory as: "<<b<<endl;

    return 0;

}
    