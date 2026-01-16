#include<iostream>
#include<math.h>
using namespace std;

bool IsPower(int n) {
    bool ans=false;
    for(int i=0;i<=n;i++) {
        if(n==pow(2,i)) {
            ans=true;
            break;
        }
    }

    return ans;
}

int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int answer=IsPower(n);

    if(answer) {
        cout<<"Number is in power of 2"<<endl;
    }
    else {
        cout<<"Number is not in power of 2"<<endl;
    }
}


