#include<iostream>
using namespace std;



class Hero {
    
    private:
    //PROPERTIES
   int health;

   public:
   char level;

   Hero() {
    cout<<"Constructor Called"<<endl;
   }

   //Parameterized constructor
   Hero(int health) {
   // cout<<"this->: "<<this<<endl;
    this->health=health;
   }

   Hero(int health,char level) {
    this->level=level;
    this->health=health;
   }

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
   
    //creation of OBJECT stactically;
    Hero h1(10);
   // cout<<"Address of h1: "<<&h1<<endl;
    h1.print();
    //dynamically
    Hero *h=new Hero(11);
    h->print();

    
    Hero temp(22,'B');
    temp.print();



   return 0;

}