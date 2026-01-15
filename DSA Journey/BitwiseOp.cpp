#include<iostream>
using namespace std;

/*
int main() {
    int a=4;
    int b=6;
    
    //BITWISE OPERATOR
    cout<<"a&b: "<< (a&b) <<endl;
    cout<<"a|b: "<< (a|b) <<endl;
    cout<<"~a: "<< (~a) <<endl;
    cout<<"a^b: "<< (a^b) <<endl;
    
    //LEFT AND RIGHT SHIFT OPERATOR
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

    //POST AND PRE inc/dec

    int i=7;
    cout<<(++i)<<endl; //8
    cout<<(i++)<<endl;  //8, i=9
    cout<<(i--)<<endl;  //9, i=8
    cout<<(--i)<<endl;  //7, i=7
}
*/



//OUTPUT QUESTIONS

/*
int main() {
    int a,b=1;
    a=10;
    if(++a) {
        cout<<b;
    }
    else {
        cout<<++b;
    }
}
*/


/*
int main() {
    int a=1;
    int b=2;
    if(a-- > 0 && ++b > 2) {
        cout<<"STAGE1";
    }
    else {
        cout<<"STAGE2";
    }
    cout<<a<<" "<<b<<endl;
}
*/


/*
int main() {
    int a=1;
    int b=2;
    if(a-- > 0 || ++b > 2) {
        cout<<"STAGE1";
    }
    else {
        cout<<"STAGE2";
    }
    cout<<a<<" "<<b<<endl;
}
*/


/*
int main() {
    int num=3;
    cout<< (25*(++num));
}
*/


int main() {
    int a=1;
    int b=a++;
    int c=++a;
    cout<<b;
    cout<<c;
}