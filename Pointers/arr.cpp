#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,3,6,9};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;

    cout<<"4th"<<*arr<<endl;
     cout<<"4th"<<*arr+1<<endl;
     cout<<"4th"<<*(arr+1)<<endl;
}