//store in key->value format
//keys are unique and point to only one value
//return in sorted form

#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int,string> m;

    m[1]="Nimrat";
    m[4]="Punjab";
    m[2]="Kaur";
    m[3]="Randhawa";
    m.insert({5,"India"});
    
    cout<<"BEFORE ERASE:"<<endl;

    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 3-> "<<m.count(3)<<endl;
    cout<<"Finding 13-> "<<m.count(13)<<endl;

    m.erase(3);
    cout<<"AFTER ERASE"<<endl;
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;


    //find
    cout<<"Finding:"<<endl;
    auto it=m.find(4);
    for(auto i=it;i!=m.end();i++) {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

}