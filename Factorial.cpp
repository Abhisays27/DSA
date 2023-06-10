#include<iostream>
using namespace std;

int Fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return (n * Fact(n-1));
}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
   cout<<n<<"!="<< Fact( n);

}