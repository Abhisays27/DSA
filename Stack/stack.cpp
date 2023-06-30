#include<iostream>
#include<stack>
using namespace std;
int main()
{
    //creation of stack
    stack<int> s;

    s.push(2);
    s.push(3);

    s.pop();
      //s.pop();
    cout<<"Top element"<<s.top()<<endl;
    
    if(s.empty()){
        cout<<"empty";

    }
    else{
        cout<<"Not empty";
    }

}