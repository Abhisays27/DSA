#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(0);

    for(auto i:s){
        cout<<i<<endl;
    }
    s.erase(s.begin());
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<s.count(8);

    set<int>::iterator itr = s.find(5);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
}