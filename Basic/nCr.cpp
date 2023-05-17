#include<iostream>
using namespace std;
int main()
{
    int n ,r;
    int a=1,b=1,c=1;
    cout<<"Enter values:";
    cin>>n>>r;
    for(int i=1;i<=n;i++){
        a=i*a;
    }
    for(int i=1;i<=r;i++){
        b=i*b;
    }
    for(int i=1;i<=n-r;i++){
        c=i*c;
    }
    cout<<"The nCr is: "<<a/(c*b);

}
