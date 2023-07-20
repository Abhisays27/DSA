#include<iostream>
using namespace std;

class Queue {
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Queue(int size){
        this->size=size;
        arr = new int[size];
        front = 0;
        rear=0;
    }

    void eneque(int data){
    if(rear=size-1){
        cout<<"QUEUE IS Full"<<endl;
    }
    else{
        arr[rear]=data;
        rear++;
    }
}

int dequeue(){
    if(front==rear){
        return -1;
    }
    else{
        int ans = arr[front];
        arr[front]=1;
        front++;
        if(front==rear){
            front=0;
            rear=0;
        }
        return ans;
    }
}

int front(){
    if(front==rear){
        return -1;
    }
    else{
        return arr[front]; 
    }
}
    
};


 int main()
{
    Queue qt(5);
    qt.eneque(11);
    qt.eneque(12);
    qt.eneque(13);
    qt.eneque(14);

    cout<<qt.front()<<endl;


}