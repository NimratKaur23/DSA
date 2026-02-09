#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data=data;
        this->next=NULL;
    }

};


void InsertAtHead(Node* &head,int d) {
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}


void print(Node* &head) {
    Node* temp=head;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void InsertAtTail(Node* &tail,int d) {
     Node* temp=new Node(d);
     tail->next=temp;
     tail=tail->next;
}


void InsertAtPosition(Node* &tail,Node* &head,int position,int d ) {
    

    //insert at starting
    if(position==1) {
        InsertAtHead(head,d);
        return;
    }

    
    Node* temp=head;
    int count=1;

    while(count<position-1) {
        temp=temp->next;
        count++;
    }
    
    //inserting at last position
    if(temp->next==NULL) {
        InsertAtTail(tail,d);
        return;
    }

    //creating a node for d
    Node* NodeToInsert=new Node(d);

    NodeToInsert->next=temp->next;
    temp->next=NodeToInsert;


}



int main() {
    
    //craetion of nodes
    Node* node1=new Node(10);
  //  cout<<node1->data<<endl;
  //  cout<<node1->next<<endl;

    //head pointed t node1
    Node* head=node1;
    Node* tail=head;
    print(head);

    InsertAtTail(tail,12);
    print(head);

    InsertAtTail(tail,15);
    print(head); 

    InsertAtPosition(tail,head,4,22);
    print(head);

    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;


    return 0;
}