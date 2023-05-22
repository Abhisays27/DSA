#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr1[10] = {0,1,1,0,0,1};
   
   
    for(int i =0;i<5;i++){
        if(arr1[i]>arr1[i+1])
        {
            swap(arr1[i],arr1[i+1]);
            
        }
        
    }
     for(int i =0;i<5;i++){
        cout<<arr1[i]<<" ";
        
    }
}