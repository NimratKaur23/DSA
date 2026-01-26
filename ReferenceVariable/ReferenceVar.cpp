#include<iostream>
using namespace std;

int main() {

    int i=5;
    //create a ref var
    int &j=i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;  //referring to same loc as of i
    cout<<i<<endl;
    cout<<j<<endl;

    return 0;
}