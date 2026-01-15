#include<iostream>
#include<limits.h>
using namespace std;

/*
int getMax(int arr[], int size) {
    int max= INT_MIN;
    for(int i=0;i<size;i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }

    return max;
}
*/

int getMax(int arr[], int size) {
    int maxi= INT_MIN;
    for(int i=0;i<size;i++) {
        maxi=max(arr[i],maxi);
    }

    return maxi;
}


/*
int getMin(int arr[], int size) {
    int min= INT_MAX;
    for(int i=0;i<size;i++) {
        if(arr[i]<min) {
            min=arr[i];
        }
    }

    return min;
}
*/


int getMin(int arr[], int size) {
    int mini= INT_MAX;
    for(int i=0;i<size;i++) {
        mini=min(arr[i],mini);
    }

    return mini;
}




int main() {
    int size;
    cin>>size;

    //int num[size];   //NOT A GOOD THING TO DO
    int num[100];   //GOOD THING TO DO
    

    //taking input in array
    for(int i=0;i<size;i++) {
        cin>>num[i];
    }

    cout<<"MAXIMUM VALUES IS: "<<getMax(num,size)<<endl;

    cout<<"MINIMUM VALUE IS: "<<getMin(num,size)<<endl;
}