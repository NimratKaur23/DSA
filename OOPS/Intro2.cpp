#include<iostream>
using namespace std;



class Hero {
    
    private:
    //PROPERTIES
   int health;

   public:
   char level;

   void print() {
    cout<<level<<endl;
   }


   int getHealth() {
    return health;
   }

   char getLevel() {
    return level;
   }

   void setHealth(int h) { 
    health=h;
   }

   void setLevel(char ch) {
    level=ch;
   } 

};



int main() {
   
    //creation of OBJECT
    Hero h1;

    cout<<"Size of h1 is: "<<sizeof(h1)<<endl;

    cout<<"Hea;th is: "<<h1.getHealth()<<endl;  //garbage value
    
    h1.setHealth(70);   //settign health
    h1.level='A';

   // cout<<"Size: "<<sizeof(h1);

   cout<<"Health is: "<<h1.getHealth()<<endl;
   cout<<"Level is: "<<h1.level<<endl;


   return 0;

}