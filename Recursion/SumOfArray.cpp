#include<iostream>
using namespace std;

int getSum(int arr[],int n) {
    
    //base case
    if(n==0) {
      return 0;
    }

    if(n==1) {
        return arr[0];
    }
    
    int sum=0;
   // sum=sum+arr[0];
    sum=arr[0]+getSum(arr+1,n-1);

    return sum;


}

int main() {

    int arr[5]={1,2,3,4,5};
    int size=5;

    int sum=getSum(arr,size);

    cout<<"Sum of array is: "<<sum<<endl;



    return 0;
}