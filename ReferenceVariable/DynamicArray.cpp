#include<iostream>
using namespace std;


int getSum(int* arr,int n) {
    int sum=0;

    for(int i=0;i<n;i++) {
        sum+=arr[i];
    }

    return sum;
}

int main() {

    int n;
    cin>>n;
    //dynamic array
    int* arr=new int[n];

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int ans=getSum(arr,n);
    cout<<"Sum is: "<<ans<<endl;

    
/*
    //case1: static
    while(true) {
        int i=5;
    }

    //case2:dynamic 
    while(true) {
        int* ptr=new int;
    }
        */


    return 0;
}