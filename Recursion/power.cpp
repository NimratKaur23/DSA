#include<iostream>
using namespace std;


/*
int power(int i,int n) {
    //base case
    if(n==0) 
       return 1;
    
    //int smallprb=power(i,n-1);
   // int bigprb= i*smallprb;

    return i*power(i,n-1);
}

int main() {

    int n;
    cin>>n;
    int ans=power(2,n);

    cout<<"Answer is: "<<ans<<endl;



    return 0;
}
    */



int power(int n) {
    //base case
    if(n==0)
       return 1;
    
    return 2*power(n-1);
}

int main()  {
    int n;
    cin>>n;

    int ans=power(n);

    cout<<"Answer is: "<<ans<<endl;

    return 0;
}