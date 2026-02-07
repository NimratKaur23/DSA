#include<iostream>
using namespace std;


bool checkPalindrome(string str, int i,int j) {

    //base case
    if(i>j)
      return 1;
    
    if(str[i]==str[j]) {
        bool ans=checkPalindrome(str,i+1,j-1);
        return ans;
    }
    else {
        return 0;
    }


}


int main() {

    string name="mam";
    cout<<endl;

    bool isPalindrome= checkPalindrome(name,0,name.length()-1);

    if(isPalindrome) {
        cout<<"It is palindrome"<<endl;
    }
    else {
        cout<<"Not a plaindrome"<<endl;
    }


    return 0;
}