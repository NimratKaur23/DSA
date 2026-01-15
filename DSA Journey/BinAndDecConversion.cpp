#include<iostream>
#include<math.h>
using namespace std;


/*
//DECIMAL TO BINARY
int main() {
    int n;
    cin>>n;

    float ans=0;
    int i=0;

    while(n!=0) {
        int bit = n & 1;
        ans=(bit * pow(10,i))+ans;
        n=n >> 1;
        i++;
    }

    cout<<"Answer is: "<<ans<<endl;
}
*/




/*
//BINARY TO DECIMAL

int main() {
    int n;
    cin>>n;

    int i=0;
    float ans=0;

    while(n!=0) {
        int digit= n%10;

        if(digit==1) {
            ans= ans+pow(2,i);
        }
        n=n/10;
        i=i+1;

    }
    cout<<ans<<endl;
}
*/




//negative to memory
int main() {
    int n;
    cin>>n;

    float ans=0;
    int i=0;

    while(n!=0) {
        int bit = n & 1;
        ans=(bit * pow(10,i)) + ans;
        n=n >> 1;
        i++;
    }

    //1's compliment
    //float ans1= (~ans);

}