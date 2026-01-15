#include<iostream>
using namespace std;

int FindUnique(int arr[], int size) {
    for(int i=0;i<size;i++) {
        int count=0;
        
        for(int j=0;j<size;j++) {
            if(arr[i]==arr[j]) {
                count++;
            }
        }

        if(count==1) {
            return arr[i];
        }

    }
}

int main() {
    int arr[7]={2,3,1,6,3,6,2};
    
    int answer= FindUnique(arr,7);

    cout<<"Unique number is: "<<answer<<endl;

    return 0;
}