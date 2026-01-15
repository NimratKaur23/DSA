#include<iostream>
using namespace std;

int FindDuplicate(int arr[], int n) {

     int size=sizeof(arr);
    for(int i=0;i<size;i++) {
        int count=0;
        for(int j=0;j<size;j++) {
            if(arr[i]==arr[j]) {
                count++;
            }
        }

        if(count==2) {
            return arr[i];
        }
    }
	
}


int main() {
    int arr[5]={4,2,1,3,1};

    int answer=FindDuplicate(arr,5);

    cout<<"ANSWER IS: "<<answer<<endl;

    return 0;
}