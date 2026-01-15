#include<iostream>
using namespace std;


/*

//PATTERN 1

int main() {
    int n;
    cin>>n;

    int i=1;

    while(i<=n) {
        int j=1;
        while(j<=n) {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/




/*
//PATTERN 2
int main() {
    int n;
    cin>>n;

    int i=1;

    while(i<=n) {
        int j=1;
        while(j<=n) {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/




/*
//PATTERN 3
int main() {
    int n;
    cin>>n;

    int i=1;

    while(i<=n) {
        int j=1;
        while(j<=n) {
            cout<<j;
            j=j+1;
        } 
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 4
int main() {
    int n;
    cin>>n;

    int i=3;

    while(i<=n && i>0) {
        int j=1;
        while(j<=n) {
            cout<< n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i-1;
    }
}
*/



/*
//PATTERN 5
int main() {
    int n;
    cin>>n;

    int i=1;
    int count=1;

    while(i<=n) {
        int j=1;
        while(j<=n) {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 6
int main() {
    int n;
    cin>>n;

    int i=1;

    while(i<=n) {
        int j=1;
        while(j<=i) {
            cout<<"*"<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/




/*
//PATTERN 7
int main() {
    int n;
    cin>>n;

    int i=1;

    while(i<=n) {
        int j=1;
        while(j<=i) {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 8
int main() {
    int n;
    cin>>n;

    int i=1;
    int count=1;

    while(i<=n) {
        int j=1;
        while(j<=i)  {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 9
int main() {
    int n;
    cin>>n;

    int i=1;
    int count=1;

    while(i<=n) {
        int j=1;
        int k=i;
        while(j<=i) {
            cout<<k;
            k=k+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 10
int main() {
    int n;
    cin>>n;

    int i=1;

    while(i<=n) {
        int j=1;
        while(j<=i) {
            cout<<i-j+1;
            j=j+1;
    }
    cout<<endl;
    i=i+1;
}
}
*/





/*
//PATTERN 11
int main() {
    int n;
    cin>>n;

    int i=1;
    while(i<=n) {
        int j=1;
        while(j<=n) {
            char ch= 'A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 12
int main() {
    int n;
    cin>>n;

    int i=1;
    while(i<=n) {
        int j=1;
        while(j<=n) {
            char ch='A'+j-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/




/*
//PATTEN 13
int main() {
    int n;
    cin>>n;

    int i=1;
    char count='A';
    while(i<=n) {
        int j=1;
        while(j<=n) {
            cout<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 14
int main() {
    int n;
    cin>>n;

    int i=1;

    while(i<=n) {
        int j=1;
        while(j<=n) {
            char ch='A'+i+j-2;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 15
int main() {
    int n;
    cin>>n;

    int i=1;
    while(i<=n) {
        int j=1;
        while(j<=i) {
            char ch= 'A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/




/*
//PATTERB 16
int main() {
    int n;
    cin>>n;

    int i=1;
    char count='A';

    while(i<=n) {
        int j=1;
        while(j<=i) {
            cout<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 17
int main() {
    int n;
    cin>>n;

    int i=1;
    while(i<=n) {
        int j=1;
        while(j<=i) {
            char ch='A'+i+j-2;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/




/*
//PATTERN 18
int main() {
    int n;
    cin>>n;

    int i=1;

    while(i<=n) {
         int j=1;
         char firstch='A'+n-i;
         while(j<=i) {
            cout<<firstch<<" ";
            firstch= firstch+1;
            j=j+1;

         }
         cout<<endl;
         i=i+1;
    }

}
*/



/*
//PATTERN 19
int main() {
    int n;
    cin>>n;

    int i=1;
    while(i<=n) {
        int j=1;
        char firstch='A'+i-j;
        while(j<=n) {
            cout<<firstch<<" ";
            firstch=firstch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 20
int main() {
    int n;
    cin>>n;

    int i=1;
    while(i<=n) {
        int space=n-i;
        while(space) {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i) {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 21
int main() {
    int n;
    cin>>n;

    int i=1;

    while(i<=n) {
        int j=1;
        while(j<=(n-i+1)) {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/




/*
//PATTTEN 22
int main() {
    int n;
    cin>>n;

    int i=1;
    while(i<=n) {
        int space=i-1;
        while(space) {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=(n-i+1)) {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTTEN 23
int main() {
    int n;
    cin>>n;

    int i=1;
    while(i<=n) {
        int space=i-1;
        while(space) {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=(n-i+1)) {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 24
int main() {
    int n;
    cin>>n;

    int i=1;
    while(i<=n) {
        int space=n-i;
        while(space) {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i) {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 25
int main() {
    int n;
    cin>>n;

    int i=1;
    while(i<=n) {
        int space=i-1;
        while(space) {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        int count=i;
        while(j<=(n-i+1)) {
            cout<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/



/*

//PATTERN 26
int main() {
    int n;
    cin>>n;

    int i=1;
    int count=1;

    while(i<=n) {
        int space=n-i;
        while(space) {
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i) {
            cout<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



/*
//PATTERN 27
int main() {
    int n;
    cin>>n;

    int i=1;

    while(i<=n) {

        //print spaces
        int space=n-i;
        while(space) {
            cout<<" ";
            space=space-1;
        }

        //print first triangle
        int j=1;
        int count=1;
        while(j<=i) {
            cout<<count;
            count=count+1;
            j=j+1;
        }
        
        //print second triangle
        int start=i-1;
        while(start) {
            cout<<start;
            start=start-1;
        }

        cout<<endl;
        i=i+1;
    }
}
*/




//DABBANG PATTERN-28
int main() {
    int n;
    cin>>n;

    int i=1;

    while(i<=n) {
        //first traingle
        int j=1;
        while(j<=(n-i+1)) {
            cout<<j;
            j=j+1;
        }

        //second traingle
        int firststart=2;
        while(firststart) {
            int k=1;
            while(k<=(i-1)) {
                cout<<"*";
                k=k+1;
            }
            firststart=firststart-1;
        }

        //third triangle
        int x=1;
        int count=n-i+1;
        while(x<=(n-i+1)) {
            cout<<count;
            count=count-1;
            x=x+1;
        }


        cout<<endl;
        i=i+1;
    }
}