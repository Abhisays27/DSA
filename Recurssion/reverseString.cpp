#include<iostream>
using namespace std;

void Reverse(string& str,int i, int j){

    //base
    if(i>j)
    return;
    swap(str[i],str[j]);
    i++;
    j--;

    Reverse(str,i,j);
    
}
int main()
{
    string name="abcde";
    Reverse(name,0,name.length()-1);
    cout<<name<<endl;
 

}