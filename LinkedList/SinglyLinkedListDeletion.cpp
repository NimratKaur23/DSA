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

    //destructor
    ~Node() {
        int value=this->data;
        //memmory free
        if(this->next!=NULL) {
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
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


void DeleteNode(int position,Node* &head) {
    
    //deleting first node
    if(position==1) {
        Node* temp=head;
        head=head->next;
        //memory free
        temp->next=NULL;
        delete temp;

    }
    else {
        //deleting any middle node or last node
        Node* curr=head;
        Node* prev=NULL;

        int count=1;
        while(count<position) {
            prev=curr;
            curr=curr->next;
            count++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

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


    //DeleteNode(1,head);
   // DeleteNode(4,head);
   DeleteNode(3,head);
    print(head);

     cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;


    return 0;
}