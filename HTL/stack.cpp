#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("abhi");
    s.push("singh");
    s.push("nautiyal");

    cout<<s.top();
    s.pop();
    cout<<s.top();

}