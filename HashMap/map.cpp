#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {

    //creation
    map<string,int> m;

    //insertion

    //1
    pair<string,int> p=make_pair("nimrat",3);
    m.insert(p);

    //2
    pair<string,int> p2("randhawa",2);
    m.insert(p2);

    //3
    m["my"]=1;
    
    //above entry will be updated
    m["my"]=2;

    //Searching
    cout<<m["my"]<<endl;
    cout<<m.at("nimrat")<<endl;

    //cout<<m.at("unknownKey")<<endl;   //this key is not inserted //give error
    cout<<m["unknownKey"]<<endl;   //output=0  //not give error   //entry will be made correspoding to unknown
    cout<<m.at("unknownKey")<<endl;   ///now it willbe zero as it is written after entry is made\

    //size
    cout<<m.size()<<endl;

    //to check presense
    cout<<m.count("bro")<<endl;
    cout<<m.count("nimrat")<<endl;

    m.erase("randhawa");
    cout<<m.size()<<endl;

    /*
    //iterating whole map
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
        */

    //using iterator
    map<string,int> :: iterator it=m.begin();

    while(it!=m.end()) {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }


    return 0;
}