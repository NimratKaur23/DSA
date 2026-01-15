#include<iostream>
using namespace std;


/*
int main() {
    int num=2;

    switch(num) {
        case 1: cout<<"FIRST"<<endl;
        break;

        case 2: cout<<"SECOND"<<endl;
        break;

        default: cout<<"DEFAULT CASE"<<endl;
    }
}
*/



/*
int main() {
    char ch='1';

    switch(ch) {
        case 1: cout<<"FIRST"<<endl;
        break;

        case '1': cout<<"CHARACTER"<<endl;
        break;

        default: cout<<"DEFAULT CASE"<<endl;  //default is not mandatory
    }
}
*/




/*

//if break is noto there rest all cases will also be printed till break is encountered or loop got finished

int main() {
    char ch='1';
    int num=1;

    switch(num) {
        case 1: cout<<"FIRST"<<endl;
        cout<<"FIRST AGAIN"<<endl;
       // break;

        case '1': cout<<"CHARACTER"<<endl;
        //break;

        default: cout<<"DEFAULT CASE"<<endl;  //default is not mandatory
    }
}
*/




/*
//nested switch

int main() {
    char ch='1';
    int num=1;

    switch(ch) {
        case 1: cout<<"FIRST"<<endl;
        cout<<"FIRST AGAIN"<<endl;
       break;

        case '1': switch(num){
            case 1: cout<<"VALUE OF NUM IS: "<<num<<endl;
        } 
        break;

        default: cout<<"DEFAULT CASE"<<endl;  //default is not mandatory
    }
}
*/



int main() {
    char ch='1';
    int num=1;

    switch(2*num) {
        case 2: cout<<"FIRST"<<endl;
        cout<<"FIRST AGAIN"<<endl;
       break;

        case '1': switch(num){
            case 1: cout<<"VALUE OF NUM IS: "<<num<<endl;
        } 
        break;

        default: cout<<"DEFAULT CASE"<<endl;  //default is not mandatory
    }
}




/*
//CALCULATOR

int main() {
    int a,b;

    cout<<"Enter the value for a:" <<endl;
    cin>>a;

    cout<<"Enter the value for b:"<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation to be performed:"<<endl;
    cin>>op;

    switch(op) {
        case '+': cout<< (a+b)<<endl;
        break;

        case '-': cout<< (a-b)<<endl;
        break;

        case '*': cout<< (a*b)<<endl;
        break;

        case '/': cout<< (a/b)<<endl;
        break;

        case '%': cout<< (a%b)<<endl;
        break;

        default: cout<<"PLEASE ENETER A VALID OPERATION"<<endl;
    }
}
*/