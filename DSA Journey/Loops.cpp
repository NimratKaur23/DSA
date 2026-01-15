#include<iostream>
using namespace std;

/*
int main() {
    int a;
    cin>>a;    //jabtak input nhi denge nexxt line nhi execute hou
    //cout<<"Value of a is: " << a<< endl;
    
    //if a is positive
    if(a>0) {
        cout<< "A is Positive"<< endl;
    }
    else {
        cout<< "A is Negative" <<endl;
    }

}
*/


/*
int main() {
    int a,b;
   // cin>>a >> b;
    //cout<<"Value of a and b is: "<<a << " " <<b <<endl;

    cout<<" Enter value of a "<< endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;

    if(a>b) {
        cout<<"Ais greater"<<endl;
    }

    if(b>a) {
        cout<<"B is greater"<<endl;
    }
}
    */


    


// if given number is positve, negative or zero
/*
int main() {
    int a;

    cout<<"Enter the value of a" <<endl;
    cin>>a;

    if(a>0) {
        cout<<"a is positive"<<endl;
    }
    else {
        if(a<0) {
            cout<<"a is negative"<<endl;
        }
        else {
            cout<<" a is zero"<<endl;
        }
    }
}
*/




//if-else if
/*
int main() {
    int a;
    cout<<"Enter value of a"<<endl;
    cin>>a;

    if(a>0) {
        cout<<"a is positve"<<endl;
    }
    else if(a<0) {
        cout<<"a is negative"<<endl;
    }
    else {
        cout<<"a is zero"<<endl;
    }
}
*/



//HOMEWORK QUESTION OUTPUT

/*
int main() {
    int a=9;
    if(a==9) {
        cout<<"NINEY";
    }

    if(a>0){
        cout<<"POSITIVE";
    }
    else {
        cout<<"NEGATIVE";
    }
}
    */



    /*
int main() {
    int a=2;
    int b=a+1;

    if((a=3)==b) {
        cout<<a;
    }
    else {
        cout<<a+1;
    }
}
    */



    /*
int main() {
    int a=24;
    if(a>20) {
        cout<<"Love";
    }
    else if(a==24) {
        cout<<"Lovely";
    }
    else {
        cout<<"Babbar";
    }
    cout<<a;
}
    */ 




int main() {
    char ch;
    cout<<"Enter character"<<endl;
    cin>>ch;

    if(ch>=97 && ch<=172) {
        cout<<"This is Lowecase";
    }
    else if(ch>=65 && ch<=90) {
        cout<<"This is uppercase";
    }
    else if(ch>=48 && ch<=57) {
        cout<<"This is Numeric";
    }
    else {

        cout<<"Symbol";
    }
}