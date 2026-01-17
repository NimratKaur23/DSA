//set-> store unique elements
//BST
//element returned in sorted order
//set is slower than unordered set
//unorder set return elemnt in random order

#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;
    

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);

    for(auto i:s) {
        cout<<i<<" ";
    }    //time complexity of insertion is O(logn)
    cout<<endl;

    
    //erasing elements
    set<int>::iterator it=s.begin();
    it++;

    s.erase(it);
    cout<<"After erasing: "<<endl;
    for(auto i:s) {
        cout<<i<<" ";
    }
    cout<<endl;


    //count-> tells element is present or not
    cout<<"5 is present or not: "<<s.count(5)<<endl;
    cout<<"-5 is present or not: "<<s.count(-5)<<endl;

    //find-> if element present it returns the index
    set<int>::iterator itr=s.find(5);
    
    for(auto it=itr;it!=s.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}