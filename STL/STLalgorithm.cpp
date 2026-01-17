#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6: "<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"Lower Bound: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    cout<<"Upper Bound Bound: "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=3;
    int b=5;
    cout<<"Max: "<<max(a,b)<<endl;
    cout<<"Min: "<<min(a,b)<<endl;

    //swapping a and b
    swap(a,b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    
    //reversing string
    string str="abcd";
    reverse(str.begin(),str.end());
    cout<<"Reverse string is: "<<str<<endl;

    //Rotating
    rotate(v.begin(),v.begin()+1,v.end());    //start,kitne roatae krne hai,end
    cout<<"AFTER ROOTATING:"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;


    //sorting
    sort(v.begin(),v.end());    //Intro sort-> quick,heap and insertion sort combining
    cout<<"AFter sorting: "<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }


    
}

