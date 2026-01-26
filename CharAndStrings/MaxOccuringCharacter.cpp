#include<iostream>
using namespace std;


char getMaxOccCharacter(string s) {
    int arr[26]={0};


    //create an array of count of characters
    for(int i=0;i<s.length();i++) {
        char ch=s[i];
         //LOwer case
        int number=0;
        if(ch>='a' && ch<='z'){
            number=ch-'a';
            
    }
    else {
        //upper case
        number=ch-'A';
    }

    arr[number]++;
}

//find maximum occuring charatcer

int maxi=-1;
int ans=0;
for(int i=0;i<26;i++) {
    if(maxi<arr[i]) {
        ans=i;
        maxi=arr[i];
    }
}
char finalAns='a'+ans;
return finalAns;
}


int main() {
    string str;
    cout<<"Enter a string: "<<endl;
    cin>>str;


    cout<<getMaxOccCharacter(str)<<endl;

    return 0;
}