#include<iostream>
using namespace std;

int firstO(int arr[],int key){
int start = 0;
int end = 5;
int mid = start + (end-start)/2;
int ans;


while(start<=end){
    if(arr[mid]==key){
        ans=mid;
        end=mid-1;
    }

    if(arr[mid]<key){
        start = mid+1;
    }

    else{
        end = mid-1;
    }
    mid = start + (end-start)/2;
}
return ans;
}

int lastO(int arr[],int key){
int start = 0;
int end = 5;
int mid = start + (end-start)/2;
int ans;


while(start<=end){
    if(arr[mid]==key){
        ans=mid;
        start=mid+1;
    }

    if(arr[mid]<key){
        start = mid+1;
    }

    else{
        end = mid-1;
    }
    mid = start + (end-start)/2;
}
return ans;
}

int main()
{
    int arr[6]={1,2,3,3,3,5}, key;
   
    cout<<"Enter the element to be searched:";
    cin>>key;
     
    cout<<"The Total occurence of "<<" "<< key<<" is "<<" "<<lastO(arr,key)-firstO(arr,key)+1;
 

    }