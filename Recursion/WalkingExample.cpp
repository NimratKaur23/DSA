#include<iostream>
using namespace std;


void reachHome(int src, int dest) {
    
    cout<<"Source: "<<src<< " destination: "<< dest<<endl;
    //base case
    if(src==dest) {
        cout<<"Reached home"<<endl;
        return;
    }

    //recursive call
    reachHome(src+1,dest);

}


int main() {

    int dest=10;
    int src=1;
    
    cout<<endl;

    reachHome(src,dest);


    return 0;
}