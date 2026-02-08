#include<iostream>
using namespace std;



class Hero {
    
    public:
    //PROPERTIES
   int health;
   char level;

   void print() {
    cout<<level<<endl;
   }

};



int main() {
   
    //creation of OBJECT
    Hero h1;

    h1.health=70;
    h1.level='A';

   // cout<<"Size: "<<sizeof(h1);

   cout<<"Health is: "<<h1.health<<endl;
   cout<<"Level is: "<<h1.level<<endl;


   return 0;

}