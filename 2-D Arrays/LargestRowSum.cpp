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



int LargetSum(int arr[][3],int row, int col) {
    int maxi=-1;
    int rowIndex=-1;
    for(int row=0;row<3;row++) {
        int sum=0;
        for(int col=0;col<3;col++) {
            sum=arr[row][col]+sum;
        }
        if(sum>maxi) {
            maxi=sum;
            rowIndex=row;
        }

    }

    cout<<"The maximum sum is: "<<maxi<<endl;
    return rowIndex;
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

    cout<<"Max row is at index: "<<LargetSum(arr,3,3)<<endl;



    return 0;
}