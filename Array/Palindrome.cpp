#include<iostream>
using namespace std;
char tolowerCase(char ch){
    if(ch>='a'&&ch<='z')
    return ch;
    else{
        char temp= ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrome(char name[],int n){
    int s=0;
     int e = n-1;
     while(s<=e){
        if(tolowerCase(name[s])!=tolowerCase(name[e])){
           return false;
        }
        else{
            s++;
            e--;
        }
       
     }
     return true;
}

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
   int n = getLength(name);
   ReverseString(name);
   for(int i=0;i<getLength(name);i++){
    cout<<name[i];
   }
   cout<<endl;
   cout<<checkPalindrome(name,n);   
   
}