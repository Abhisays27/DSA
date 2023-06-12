#include<iostream>
using namespace std;

void Reverse(string& str,int i, int j){

    //base
    if(i>j)
    return;
    swap(str[i],str[j]);
    Reverse(str,i+1,j-1);
    
}
int main()
{
    string name="abcde";
    Reverse(name,0,name.length()-1);
    cout<<name<<endl;
 

}