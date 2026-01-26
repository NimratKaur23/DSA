#include<iostream>
using namespace std;

void update(int **p) {
   // p=p+1;   ->NO CHANGE

   //*p=*p+1;  ->Change happen

   **p=**p+1;  //-> change happen
}


int main() {

    int i=5;
    int* p=&i;
    int** q=&p;

    cout<<"Before: "<<i<<endl;
    cout<<"Before: "<<p<<endl;
    cout<<"Before: "<<q<<endl;
    cout<<endl;
     update(q);
    cout<<"After: "<<i<<endl;
    cout<<"After: "<<p<<endl;
    cout<<"After: "<<q<<endl;
   

    return 0;
}