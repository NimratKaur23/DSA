#include<iostream>
using namespace std;


void revStr(char name[],int n) {
    int s=0;
    int e=n-1;

    while(s<e) {
        swap(name[s++],name[e--]);
    }
}


int getLength(char name[]){
    int len=0;
    for(int i=0;name[i]!='\0';i++) {
        len++;
    }

    return len;
}



int main() {
    char name[20];

    cout<<"Enter your name:"<<endl;
    cin>>name;
    
    int len=getLength(name);
    cout<<"Length is: "<<getLength(name)<<endl;
    revStr(name,len);
    cout<<"Rev string is: "<<name<<endl;



    return 0;
}