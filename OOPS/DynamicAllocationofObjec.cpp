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
    //dynamic
    Hero *h1=new Hero;
    h1->setHealth(70);
    h1->setLevel('A');

    cout<<"Level is: "<<(*h1).level<<endl;
    cout<<"Health is: "<<(*h1).getHealth()<<endl;

    cout<<"Level is: "<<h1->level<<endl;
    cout<<"Health is: "<<h1->getHealth()<<endl;



   return 0;

}