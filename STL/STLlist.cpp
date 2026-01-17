#include<iostream>
#include<list>
using namespace std;

//cacnot acces randomnly

int main() {
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l) {
        cout<<i<<" ";
    }

    cout<<endl;

    l.erase(l.begin());
    cout<<"AFTER ERASE:"<<endl;
    for(int i:l) {
        cout<<i<<" ";
    } 
    cout<<endl;

    cout<<"Size of list: "<<l.size()<<endl;
    
    //copying l list to n list
    //list<int> n(l);  
    
    list<int> n(5,100);
    cout<<"Printing n:"<<endl;
    for(int i:n) {
        cout<<i<<" ";
    }




}