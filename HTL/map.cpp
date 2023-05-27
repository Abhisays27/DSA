#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1] = "abhishek";
    m[2] = "singh";
    m[13] = "nautiyal";
    m.insert({5,"bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13  "<<m.count(13)<<endl;

}