#include<iostream>
using namespace std;

int factorial(int n) {
    //base case
    if(n==0) 
       return 1;
    
    //int smallprb=factorial(n-1);
   // int bigprb=n*smallprb;

    //return n*smallprb;

    return n*factorial(n-1);
}

int main() {

    int n;
    cin>>n;

    int ans=factorial(n);

    cout<<"Factorial is: "<<ans<<endl;

    return 0;
}