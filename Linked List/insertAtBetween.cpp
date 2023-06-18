#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void deleteNode(Node* &head,int pos){
    if(pos==1){
        Node* temp= head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else{
        Node* prev=NULL;
        Node* curr=head;
        int count=1;
        while(count<pos){
            prev=curr;
            curr=curr->next;
            count++;
           
        }
        prev->next=curr->next;
         curr->next=NULL;
            delete curr;
    }
}
void insertAtHead(Node* &head,int d){
    //new node creation
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}


void insertAtTail(Node *&tail, int d)
{
    // new node creation
    Node *temp = new Node(d);
    tail->next = temp;
     tail = temp; 
}

void insertInBetween(Node *&head,Node* &tail,int pos,int d){
    if(pos==1){
        insertAtHead(head,d);
        return;
    }
    
    Node* temp=head;
    int count=1;
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    Node* insertNode= new Node(d);
    insertNode->next=temp->next;
    temp->next=insertNode;
    

}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // Cfeated a new node
    Node *node1 = new Node(10);
    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtTail(tail, 17);
    insertAtTail(tail, 19);

    print(head);
    insertInBetween(head,tail,6,18);
    print(head);
    deleteNode(head,3);
     print(head);

    return 0;
}