#include<iostream>
using namespace std;




//EVEN OR ODD


/*
string EvenOdd(int a) {
    if(a%2==0) {
        return "Even";
    }
    else {
        return "Odd";
    }
}

int main() {
    int num;
    cin>>num;
    
    string answer=EvenOdd(num);

    cout<<"Answer is: "<<answer<<endl;


    return 0;
}
*/



/*

bool isEven(int a) {
    //odd
    if(a&1) {
        return 0;
    }

    return 1;   //even
}


int main() {
    int num;
    cin>>num;

    if(isEven(num)) {
        cout<<"Number is even"<<endl;
    }
    else {
        cout<<"Number is odd"<<endl;
    }

    return 0;
}
*/





/*
//nCr

int factorial(int n) {
    int fact=1;
    for(int i=1;i<=n;i++) {
        fact=fact*i;
    }
    
    return fact;
}


int nCr(int n, int r) {
    int num=factorial(n);
    int denom= factorial(r) * factorial(n-r);

    int ans= num/denom;

    return ans;
} 


int main() {
    int a,b;
    cin>>a >>b;

    int answer= nCr(a,b);

    cout<<"ANSWER IS: "<<answer<<endl;

    return 0;
}
*/




/*
//print counting

void printCounting(int n) {
    for(int i=1;i<=n;i++) {
        cout<<i<<endl;
    }
        return ; ///optional
}

int main(){
    int n;
    cin>>n;

    printCounting(n);

    return 0;
}
*/





//Prime or not
//1-> prime, 0->not prime
 
bool isPrime(int n) {
    for(int i=2;i<n;i++) {
        if(n%i==0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;
    cin>>num;

    if(isPrime(num)) {
        cout<<"It is a prime number"<<endl;
    }
    else {
        cout<<"It is not a prime number"<<endl;
    }

    return 0;
}