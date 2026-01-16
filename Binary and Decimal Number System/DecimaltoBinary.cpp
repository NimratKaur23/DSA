#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the decimal number:" <<endl;
    cin>>n;

    float ans=0;
    int i=0;

    while(n!=0) {
        int bit= n&1;   //it gives the rightmost bit as answer
        ans=(bit * pow(10,i))+ans;
        n=n>>1;      //right shift operator, removes rightmost bit
        i++;
    }

    cout<<"Binary representation is: "<<ans<<endl;
}