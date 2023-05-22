#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int z;
    z=a;
    a=b;
    b=z;
    cout<<a <<b;
}
int main()
{
    int num1,num2;
    cout<<"enter 2 numbers:";
    cin>>num1>>num2;
    swap(num1,num2);
  

}
