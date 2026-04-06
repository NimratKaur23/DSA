#include<iostream> 
#include<queue>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};


void Inorder(Node* root) {

    //base case
    if(root==NULL) {
        return;
    }

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}




void Preorder(Node* root) {

    //base case
    if(root==NULL) {
        return;
    }

    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}




void Postorder(Node* root) {

    //base case
    if(root==NULL) {
        return;
    }

    Postorder(root->right);
    Postorder(root->left);
    cout<<root->data<<" ";
}


void levelOrderTraversal(Node* root) {

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {

        Node* frontNode=q.front();
        q.pop();

        if(frontNode==NULL) {
            cout<<endl;

            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout<<frontNode->data<<" ";
            if(frontNode->left) {
                q.push(frontNode->left);
            }

            if(frontNode->right) {
                q.push(frontNode->right);
            }
        }
    }

} 


Node* insertIntoBST(Node* root,int d) {
    
    //base case
    if(root==NULL) {
        root=new Node(d);
        return root;
    }

    if(d>root->data) {
        //insert into right part
        root->right= insertIntoBST(root->right,d);
    }
    else {
        //left part insert
        root->left=insertIntoBST(root->left,d);
    }

    return root;
}



Node* minVal(Node* root) {
    Node* temp=root;

    while(temp->left!=NULL) {
        temp=temp->left;
    }

    return temp;
}


Node* maxVal(Node* root) {
    Node* temp=root;

    while(temp->right!=NULL) {
        temp=temp->right;
    }

    return temp;
}




Node* deleteFromBST(Node* root,int val) {

    //base case
    if(root==NULL) {
        return root;
    }

    if(root->data==val) {
        //0 child
        if(root->left==NULL && root->right==NULL) {
            delete root;
            return NULL;
        }

        //1 child
        //left child
        if(root->left!=NULL && root->right==NULL) {
            Node* temp=root->left;
            delete root;
            return temp;
        }


        //right child
        if(root->left==NULL && root->right!=NULL) {
            Node* temp=root->right;
            delete root;
            return temp;
        }


        //2 child
        if(root->left!=NULL && root->right!=NULL) {
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
        }


        
    }
    else if(root->data>val) {
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else {
        root->right=deleteFromBST(root->right,val);
        return root;
    }

}




void takeInput(Node* &root) {
    int data;
    cin>>data;

    while(data!=-1) {
        insertIntoBST(root,data);
        cin>>data;
    }
}


int main() {

    Node* root=NULL;

    cout<<"Enter data to create BST"<<endl;
    takeInput(root);
    

   cout<<"PRINITING THE BST"<<endl;

    levelOrderTraversal(root);


    cout<<"PRINTING INORDER"<<endl;
    Inorder(root);

    cout<<endl <<"PRINTING POSTORDER"<<endl;
    Postorder(root);

    cout<<endl <<"PRINTING PREORDER"<<endl;
    Preorder(root);


    cout<<endl<<"MINIMUM VALUE IS: "<<minVal(root)->data<<endl;
    cout<<endl<<"MAXIMUM VALUE IS: "<<maxVal(root)->data<<endl;
     

    root=deleteFromBST(root,30);



    return 0;
}