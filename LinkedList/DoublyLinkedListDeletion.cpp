#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
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



//traversing linked list
void print(Node* &head) {
    Node* temp=head;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;;
}



//gives length of linked list
int getLength(Node* &head) {
    int len=0;
    Node* temp=head;

    while(temp!=NULL) {
        len++;
        temp=temp->next;
    }

    return len;
}


void InsertAtHead(Node* &tail,Node* &head,int d) {
    
    //empty list
    if(head==NULL) {
        Node* temp=new Node(d);
        head=temp;
        tail=temp;

    }
    else {
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}


void InsertAtTail(Node* &head,Node* &tail,int d) {

    if(tail==NULL) {
        Node* temp=new Node(d);
        tail=temp;
        head=temp;

    }
    else {
    Node* temp=new Node(d);

    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}


void InsertAtposition(Node* &tail,Node* &head,int position,int d) {

    //insert at start
    if(position==1) {
        InsertAtHead(tail,head,d);
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
        InsertAtTail(head,tail,d);
        return;
    }

    //creating a node for d
    Node* NodeToInsert=new Node(d);

    NodeToInsert->next=temp->next;
    temp->next->prev=NodeToInsert;
    temp->next=NodeToInsert;
    NodeToInsert->prev=temp;
    

}


void DeleteNode(int position,Node* &head) {
    
    //deleting first node
    if(position==1) {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
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

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}



int main() {
/*
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    */

    Node* head=NULL;
    Node* tail=NULL;

    print(head);
    cout<<getLength(head)<<endl;

    InsertAtHead(tail,head,11);
    print(head);

    InsertAtHead(tail,head,13);
    print(head);

    InsertAtHead(tail,head,8);
    print(head);

    InsertAtTail(head,tail,25);
    print(head);

    InsertAtposition(tail,head,2,100);
    print(head);

    InsertAtposition(tail,head,1,101);
    print(head);

    InsertAtposition(tail,head,7,102);
    print(head);

   // DeleteNode(1,head);
   //DeleteNode(6,head);
   DeleteNode(7,head);
    print(head);


   

  



    return 0;
}