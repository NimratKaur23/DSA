#include<iostream>
using namespace std;

int Pivot(int arr[], int n) {
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(mid>=s && mid<=e) {
        int sumleft=0;
        for(int i=s;i<mid-1;i++) {
            sumleft=sumleft+arr[i];
        }

        int sumright=0;
        for(int j=mid+1;j<=e;j++) {
            sumright=sumright+arr[j];
        }

        if(sumleft==sumright) {
            ans=mid;
        }

        else if(sumleft>sumright) {
            mid=mid-1;
        }

        else if(sumleft<sumright) {
            mid=mid+1;
        }
    }

    return ans;
}
 

int main() {
    int arr[6]={1,7,3,6,5,6};

    int pivot=Pivot(arr,6);

    cout<<"Pivot element is: "<<pivot<<endl;

    return 0;
}