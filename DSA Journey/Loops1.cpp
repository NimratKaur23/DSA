#include<iostream>
using namespace std;


/*
//WHILE LOOP
//printing 1 to n
int main() {
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    int i=1;

    while(i<=n) {
        cout<<i<<" ";
        i=i+1;
    }
     
}
    */



/*
//Sum of 1 to n numbers
int main() {
    int n;
    cin>>n;
    int i=1;
    int sum=0;

    while(i<=n) {
          sum=sum+i;
          i=i+1;
    }
    cout<<"Vlaue of sum is: "<<sum<<endl;
}
*/



/*
//SUM OF ALL EVEN NUMBERS
int main() {
    int n;
    cin>>n;
    int sum=0;
    int i=2;
    while(i<=n) {
        sum=sum+i;
        i=i+2;
    }

    cout<<"Sum of even numbers is: "<<sum<<endl;
}
*/



//Number is prime or not
int main() {
    int n;
    cin>>n;
    int i=2;

    while(i<n) {
        if(n%i==0) {
            cout<<"NOT PRIME for "<<i<<endl;
        }
        else {
            cout<<"PRIME for "<<i<<endl;
        }

        i=i+1;
     

    }
}