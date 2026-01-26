#include<iostream>
using namespace std;

//print row wise sum
void printSum(int arr[][3],int row,int col) {
    
    cout<<"Printing row wise sum: "<<endl;
    for(int i=0;i<row;i++) {
        int sum=0;
        for(int j=0;j<col;j++) {
            sum=arr[i][j]+sum;
        }
        cout<<sum<<" ";

    }
    cout<<endl;
}


//print col wise sum
void printColSum(int arr[][3],int row,int col) {
    cout<<"Printinf col wise sum:" <<endl;
    for(int i=0;i<3;i++) {
        int sum=0;
        for(int j=0;j<3;j++) {
            sum=arr[j][i]+sum;
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}




int main() {
    int arr[3][3];

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin>>arr[i][j];
        }
    }


    //print
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printSum(arr,3,3);

    printColSum(arr,3,3);



    return 0;
}