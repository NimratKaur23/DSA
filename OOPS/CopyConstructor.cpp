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


   //COPY CONSTRUCTOR
   Hero(Hero& temp) {
    cout<<"COPY CONSTRUCTOR CALLED"<<endl;
    this->health=temp.health;
    this->level=temp.level;
   }





   void print() {
    cout<<"health: "<<this->health<<endl;
    cout<<"level: "<<this->level<<endl;
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
   
     Hero suresh(70,'C');
     //suresh.setHealth(70);
     //suresh.setLevel('C');
     suresh.print();
     
     //COPY CONSTRUCTOR
     Hero ritesh(suresh); 
     ritesh.print();



   return 0;

}