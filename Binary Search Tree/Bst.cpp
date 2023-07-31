#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left=NULL;
        this->right=NULL;

    }

};

Node* insertIntoBst(Node* &root,int d){
    //base
    if(root==NULL){
        root = new Node(d);
        return root;
    }

    if(d>root->data){
        root->right = insertIntoBst(root->right,d);

    }
    else{
         root->left = insertIntoBst(root->left,d);
    }
    return root;

}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        insertIntoBst(root,data);
        cin>>data;

    }

      
}

int main() {
    Node* root = NULL;
    cout<<"Enter data:";
    takeInput(root);
}