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
    

   //DESTRUCTOR
   ~Hero() {
    cout<<"Destrutor is called"<<endl;
   }

};



int main() {
   //static
  Hero a; 

  //dynamic
  Hero *b=new Hero();
  delete b;




   return 0;

}