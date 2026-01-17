#include<iostream>
#include<queue>
using namespace std;

//queue- first in first out
int main() {
    queue<string> q;

    q.push("Nimrat");
    q.push("Kaur");
    q.push("Randhawa");

    cout<<"Size of queue: "<<q.size()<<endl;

    cout<<"First element: "<<q.front()<<endl;

    q.pop();
    cout<<"First element: "<<q.front()<<endl;

    cout<<"Size after pop: "<<q.size()<<endl;

}