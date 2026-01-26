#include<iostream>
using namespace std;


int getLength(char name[]){
    int len=0;
    for(int i=0;name[i]!='\0';i++) {
        len++;
    }

    return len;
}


int main() {
    char name[20];

    cout<<"Enter your name: "<<endl;
    cin>>name;

    cout<<"Length of string is: "<<getLength(name)<<endl;
}