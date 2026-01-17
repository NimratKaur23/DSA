#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);

    for(int i:d) {
        cout<<i<<" ";
    }

    cout<<endl;

    //printing ith index element
    cout<<"First index element: "<<d.at(1)<<endl;

    cout<<"First element:" <<d.front()<<endl;
    cout<<"Last element: "<<d.back()<<endl;
    
    cout<<"Empty or not: "<<d.empty()<<endl;
    
   cout<<"Before erase size: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase size: "<<d.size()<<endl;


    /*
    //popping element
    d.pop_back();
    cout<<"After popping from back"<<endl;
    for(int i:d) {
        cout<<i<<" ";
    }

    cout<<endl;

    d.pop_front();
    cout<<"After popping from front"<<endl;
    for(int i:d) {
        cout<<i<<" ";
    }*/

}