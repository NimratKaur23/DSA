#include<iostream>
using namespace std;


int main() {

    int arr[10]={2,5,6,7};
    cout<<"Address of first memory block is: "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block is: "<<&arr[0]<<endl;
    cout<<"Value: "<<*arr<<endl;
    cout<<"Value: "<<*arr+1<<endl;
    cout<<"value: "<<*(arr+1)<<endl;
    cout<<"Value: "<<(*arr)+1<<endl;
    cout<<"Value: "<<arr[2]<<endl;
    cout<<"Value: "<<*(arr+2)<<endl;


    int i=3;
    cout<<"Value: "<<i[arr]<<endl;


    int temp[10]={1,2};
    cout<<"Size is: "<<sizeof(temp)<<endl;
    cout<<"Size is: "<<sizeof(*temp)<<endl;
    cout<<"Size is: "<<sizeof(&temp)<<endl;
  


    int *ptr=&temp[0];
    cout<<"Size is: "<<sizeof(ptr)<<endl;
    cout<<"Size is: "<<sizeof(*ptr)<<endl;
    cout<<"Size is: "<<sizeof(&ptr)<<endl;


    int a[20]={1,2,3,4,5};
    cout<<"Value is: "<<&a[0]<<endl;   //&a,a

    int *pt=&a[0];
    cout<<"value is: "<<pt<<endl;
    cout<<"value is: "<<*pt<<endl;
    cout<<"value is: "<<&pt<<endl;


    cout<<"Symbol table cant be changed"<<endl;

    int ar[10];
    //ar=ar+1;   ->ERROR
    int *pt2=&arr[0];
    pt2=pt2+1;
    cout<<"Value is: "<<pt2<<endl;







    return 0;
}