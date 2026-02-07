#include<iostream>
using namespace std;


bool BinarySearch(int arr[],int s,int e,int key) {
    
    //base case

    //element not found
    if(s>e) 
      return false;
    
    int mid=s+(e-s)/2;
    
    //element found
    if(arr[mid]==key) {
        return true;
    }
    


    if(arr[mid]<key) {
      return  BinarySearch(arr,mid+1,e,key);
    }
    else {
        return BinarySearch(arr,s,mid-1,key);
    }


}



int main() {

    int arr[6]={2,4,6,10,14,16};
    int size=6;
    int key=16;

    cout<<"Present or not: "<<BinarySearch(arr,0,5,key)<<endl;
    

    /*
    int ans=BinarySearch(arr,0,5,key);

    if(ans) {
        cout<<"Key is present"<<endl;
    }
    else {
        cout<<"Key is not present"<<endl;
    }
        */



    return 0;

}