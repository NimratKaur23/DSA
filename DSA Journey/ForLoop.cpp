#include<iostream>
using namespace std;

/*
int main() {
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++) {
        cout<<i<<endl;
    }
}
*/

/*
int main() {
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int i=1;
    for( ; ;) {
        if(i<=n) {
        cout<<i<<endl;
        }
        else {
            break;
        }
        i++;
    }
}
*/


/*
int main() {
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    for(int a=0, b=1; a>=0 && b>=1; a--,b--) {
        cout<<a<<" "<<b<<endl;
    }
}
*/



/*
//SUM of 1ton numbers
int main() {
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    int sum=0;

    for(int i=1;i<=n;i++) {
        sum=sum+i;
    }

    cout<<"Sum is: "<<sum<<endl;
}
*/



/*
//FIBONACCI SERIES
int main() {
    int n=10;
    int a=0;
    int b=1;

    cout<<a<<" "<<b<<" ";
    
    for(int i=1;i<=n;i++) {
        int nextNum= a+b;
        cout<<nextNum<<" ";
        a=b;
        b=nextNum;
    }
}
    */



/*

//PRIME NUMBERS
int main() {
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    bool isPrime=1;

    for(int i=2;i<n;i++) {
        if(n%i == 0) {
            //cout<<"NOT PRIME NUMBER"<<endl;
            isPrime=0;
            break;   //no need to check furtehr conditions, come out of loop
        }
    }

    if(isPrime == 0) {
        cout<<"NOT A PRIME NUMBER"<<endl;
    }
    else 
    {
        cout<<"IT IS A PRIME NUMBER"<<endl;
    }
}
    */




/*
//CONTINUE
int main() {
    for(int i=0;i<5;i++) {
        cout<<"Nimrat"<<endl;
        cout<<"Kaur"<<endl;
        continue;
        cout<<"Randhawa"<<endl;
    }
}
    */






//OUTPUT QUESTIONS

/*
int main() {
    for(int i=0;i<=5;i++) {
        cout<<i<<" ";
        i++;
    }
}
*/


/*
int main() {
    for(int i=0;i<=5;i--) {
        cout<<i<<" ";
        i++;
    }
}
*/



/*
int main() {
    for(int i=0;i<=15;i+=2) {
        cout<<i<<" ";
        
        if(i&1) {
            continue;
        }
        i++;
    }
}
*/



/*
int main() {
    for(int i=0;i<5;i++) {
        for(int j=i;j<=5;j++) {
            cout<<i<<" "<<j<<endl;
        }
    }
}
*/




int main() {
    for(int i=0;i<5;i++) {
        for(int j=i;j<=5;j++) {
            if(i+j==10) {
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}