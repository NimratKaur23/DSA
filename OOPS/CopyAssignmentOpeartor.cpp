#include<iostream>
#include<cstring>
using namespace std;



class Hero {
    
    private:
    //PROPERTIES
   int health;

   public:
   char *name;
   char level;

   Hero() {
    cout<<"Constructor Called"<<endl;
    name=new char[100];
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
    //DEEP COPY 
    char *ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;

    cout<<"COPY CONSTRUCTOR CALLED"<<endl;
    this->health=temp.health;
    this->level=temp.level;
   }
    


   void print() {
    cout<<endl;
    cout<<"name: "<<this->name<<endl;
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

   void setName(char name[]) {
    strcpy(this->name,name);
   }

};



int main() {
   
    Hero hero1;
    hero1.setHealth(20);
    hero1.setLevel('B');
    char name[7]="nimrat";
    hero1.setName(name);

    //hero1.print();


    //use defalut constructor
    Hero hero2(hero1);
    //Hero hero2=hero1;

    //hero2.print();

    hero1.name[0]='S';
    hero1.print();

    hero2.print();    //SHALLOW COPY
    
    //COPY ASSIGNMENT OPEARATOR
    hero1=hero2;

    hero1.print();

    hero2.print();




   return 0;

}