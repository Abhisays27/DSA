#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack {
public:
    Node* top;

    // Behavior
    Stack() {
        top = nullptr;
    }

    void push(int element) {
        Node* newNode = new Node(element);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack underflow" << endl;
            return;
        }

        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return top->data;
    }

    bool isEmpty() {
        return (top == nullptr);
    }
};

int main() {
    Stack st;
    st.push(22);
    st.push(24);
    st.push(52);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    return 0;
}
