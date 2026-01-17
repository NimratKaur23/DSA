//vector is dynamic array, as soon as vector filled it will double its size
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;

    //size-> number of current element
    //capacity-> total memory allocated
    cout<<"Capacity of vector: "<<v.capacity()<<endl;
    
    //pushing element into vector
    v.push_back(1);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;
    cout<<"Size of vector: "<<v.size()<<endl;

    cout<<"Element at 2nd index: "<<v.at(2)<<endl;

    cout<<"First element: "<<v.front()<<endl;
    cout<<"Last element: "<<v.back()<<endl;

    //popping elements from vector
    cout<<"Before pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    } cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }


    //clear vector-> size become zero but not capacity
    cout<<"Before clear size: "<<v.size()<<endl;
    cout<<"Before clear capacity: "<<v.capacity()<<endl;
    v.clear();
    cout<<"After clear size: "<<v.size()<<endl;
    cout<<"After clear capacity: "<<v.capacity()<<endl;
    

    //if size of vector is already known
    vector<int> a(5,1);
    cout<<"Printing a"<<endl;
    for(int i:a) {
        cout<<i<<" ";
    }
    cout<<endl;

    //copying a to someother vector
    vector<int> last(a);
    cout<<"Printing last vector"<<endl;
    for(int i:last) {
        cout<<i<<" ";
    }

}