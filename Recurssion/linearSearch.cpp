#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size,int n){
    //base case
    if(n==arr[0]){
        return true;
    }
   if(size==0){
    return false;
   }
    else{
    bool ans = linearSearch(arr+1,size-1,n);
    return ans;
    }
}
int main()
{
    int arr[5]={2,4,6,8,9};
    int size=5;
    int n;
    cout<<"Enter element to search:";
    cin>>n;
    bool ans1 = linearSearch(arr,size,n);
    if(ans1==true){
        cout<<"Key Found";
    }
    else{
        cout<<"Key not found";

    }

    }