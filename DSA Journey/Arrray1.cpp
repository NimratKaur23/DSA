#include<iostream>
using namespace std;


/*
int main() {
    //declare
    int num[15];
    
    //accessing an array
    cout<<"Value at 0 index: "<<num[0]<<endl;  //garbage value will be there

    //cout<<"Value at 20 index: "<<num[20]<<endl; 

    //intializing the array
    int second[3]={5,7,11};

    //acccesing an element

    cout<<"Value at 2 index: "<<second[2]<<endl; 

    int third[15]={2,7};
    int n=15;
    cout<<"Printing the array"<<endl;
    //print the array
    for(int i=0;i<n;i++) {
        cout<<third[i]<<" ";
    }
    cout<<endl;
    
    //intialising all elements of array with zero
    int fourth[10]={0};
    int n1=10;
    cout<<"Printing the array"<<endl;
    //print the array
    for(int i=0;i<n1;i++) {
        cout<<fourth[i]<<" ";
    }

    cout<<endl;

    //intilaising all loc with 1 is not possible
    int fifth[10]={1};
    int n2=10;
    cout<<"Printing the array"<<endl;
    //print the array
    for(int i=0;i<n1;i++) {
        cout<<fifth[i]<<" ";
    }
   
    cout<<endl;
    cout<<"Everything is fine"<<endl;
}

*/





//ARRAY WITH FUNCTIONS

void printArray(int arr[], int size) {

cout<<"Printing the array"<<endl;
    //print the array
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }

    cout<<"printing done"<<endl;
}



int main() {
    int second[3]={5,7,11};

    //acccesing an element

    cout<<"Value at 2 index: "<<second[2]<<endl; 

    int third[15]={2,7};
    int n=15;
    //printArray(third,n);
    cout<<endl;
    
    //intialising all elements of array with zero
    int fourth[10]={0};
    int n1=10;
   //printArray(fourth,n1);

    cout<<endl;

    //intilaising all loc with 1 is not possible
    int fifth[10]={1};
    int n2=10;
   // printArray(fifth,n2);

   int fifthsize=sizeof(fifth)/sizeof(int);
   cout<<"size of fifth is: "<<fifthsize<<endl;

    char ch[5]={'a','b','c','n','r'};
    cout<<ch[3]<<endl;

    cout<<"Printing the array"<<endl;
    //print the array
    for(int i=0;i<5;i++) {
        cout<<ch[i]<<" ";
    }



    double firstDouble[5];
    float firstFloat[6];
    bool firstbool[9];

   
    cout<<endl;
    cout<<"Everything is fine"<<endl;
}
