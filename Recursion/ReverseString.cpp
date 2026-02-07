#include<iostream>
using namespace std;





void reverseString(string& str,int s,int e, int n) {
    
    cout<<"Call received for "<<str<<endl;
 
    if(s>e) 
      return;
    
    swap(str[s],str[e]);
    s++;
    e--;

    //recursion
    reverseString(str,s,e,n);

}



int main() {

    string str="abcde";
    int length=str.length();
     
    cout<<endl;
    reverseString(str,0,length-1,length);
    cout<<endl; 

    cout<<str<<endl;


    return 0;
}