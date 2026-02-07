#include<iostream>
using namespace std;

void print(int arr[],int n) {
    cout<<"Size of array is "<<n<<endl;

    for(int i=0;i<n;i++)  
    {
    cout<<arr[i]<<" ";
    } cout<<endl;
}




bool LinearSearch(int arr[],int n,int key) {

    print(arr,n);
    
    //base case
    if(n==0)
      return 0;
    
    if(arr[0]==key) {
        return 1;
    }
    else {
      bool ans=  LinearSearch(arr+1,n-1,key);
      return ans;
    }
    
    
}

int main() {

    int arr[5]={5,3,1,2,6};
    int size=5;
    int key=5;

    int ans=LinearSearch(arr,size,key);

    if(ans) {
        cout<<"Key is present"<<endl;
    }
    else {
        cout<<"Key is not present"<<endl;
    }


    return 0;
}