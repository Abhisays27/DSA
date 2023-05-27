#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int ,4> arr ={1,2,3,4};
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }

    cout<<arr.at(2)<<endl;
    cout<<arr.front()<<endl;
     cout<<arr.back()<<endl;
}