#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
void print(Node *tail)
{
    Node *temp = tail;
    cout << tail->data; while (tail->next != temp)
    {
        cout << tail->data << " ";
        tail = tail->next;
    }
    cout << " ";
}
void InsertNode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
int main()
{
    Node *tail = NULL;
    InsertNode(tail, 5, 3);
    InsertNode(tail, 3, 5);
    InsertNode(tail, 5, 7);
    InsertNode(tail, 7, 9);
    InsertNode(tail, 9, 6);
    print(tail);
}