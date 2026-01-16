#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i=1;

    while(i<=n) {
        //first traingle
        int j=1;
        while(j<=(n-i+1)) {
            cout<<j;
            j=j+1;
        }

        //second traingle
        int firststart=2;
        while(firststart) {
            int k=1;
            while(k<=(i-1)) {
                cout<<"*";
                k=k+1;
            }
            firststart=firststart-1;
        }

        //third triangle
        int x=1;
        int count=n-i+1;
        while(x<=(n-i+1)) {
            cout<<count;
            count=count-1;
            x=x+1;
        }


        cout<<endl;
        i=i+1;
    }
}