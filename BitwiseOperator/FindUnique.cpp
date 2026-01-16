#include<iostream>
using namespace std;

int main()  {
    int ans=0;
    int arr[9]={2,5,6,3,7,3,7,6,2};
    int n= sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<n;i++) {
        ans=ans^arr[i];
    }

    cout<<"The unique number is: "<<ans<<endl;
}