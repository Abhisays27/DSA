#include<iostream>
using namespace std;

void printArray (int arr[], int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done!";
}
int main()
{
    int num[5] ={8,7,6,5,4};
    
    for(int i=0;i<5;i++)
    {
        cout<<num[i]<<endl;
    }
    printArray(num,8);
}