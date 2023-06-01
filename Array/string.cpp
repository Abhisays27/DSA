#include<iostream>
using namespace std;

int getLength(char name[]){
    int i = 0;
    while(name[i]!='\0'){
        i++;
    }
    return i;
}
int main()
{
   char name[20];
   cout<<"Enter your name:";
   cin>>name;
   cout<<"Length is:"<<getLength(name);
}