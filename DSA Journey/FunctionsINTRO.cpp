#include<iostream>
using namespace std;



/*
//pow(a,b) -> for each input we need to write code again and again
//code is bulky, not readable, and buggy
int  main() {
    int a,b;
    
    cout<<"ENTER VALUE OF a: "<<endl;
    cin>>a;

    cout<<"ENETR VALUE OF b: "<<endl;
    cin>>b;

    int ans=1;

    for(int i=1;i<=b;i++) {
        ans=ans*a;
    }

    cout<<"answer is a: " <<ans<<endl;

    //return 0;

}
*/





/*
int power(int a,int b) {
    int ans=1;

    for(int i=1;i<=b;i++) {
        ans=ans*a;
    }
    return ans;
}


int main() {
    int a,b;
    cin>>a >>b;

    int answer=power(a,b);
    cout<<"ANSWER IS: "<<answer<<endl;


    int c,d;
    cin>>c >>d;

    int answer=power(c,d);
    cout<<"ANSWER IS: "<<answer<<endl;

    return 0;
}
*/





int power() {
    int a, b;
    cin>>a >>b;

    int ans=1;

    for(int i=1;i<=b;i++) {
        ans=ans*a;
    }
    return ans;
}


int main() {
    

    int answer=power();
    cout<<"ANSWER IS: "<<answer<<endl;

    
    int answer1=power();
    cout<<"ANSWER IS: "<<answer1<<endl;

    
    int answer2=power();
    cout<<"ANSWER IS: "<<answer2<<endl;

    return 0;
}

