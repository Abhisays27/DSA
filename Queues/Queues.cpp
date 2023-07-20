#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(11);
    q.push(19);
    q.push(33);
    cout<<q.front()<<endl;
    q.pop();
}