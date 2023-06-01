#include<iostream>
using namespace std;

int getLength(char name[]){
    int i = 0;
    while(name[i]!='\0'){
        i++;
    }
    return i;
}
void ReverseString(char name[]){
    int s=0;
    int e = getLength(name)-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
   
}
int main()
{
   char name[20];
   cout<<"Enter your name:";
   cin>>name;
   ReverseString(name);
   for(int i=0;i<getLength(name);i++){
    cout<<name[i];
   }
   
   
}