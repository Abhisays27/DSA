#include<iostream>
using namespace std;

int firstO(int arr[],int key){
int start = 0;
int end = 6;
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
int end = 6;
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
    int arr[7]={0,1,1,1,1,1,4}, key;
   
    cout<<"Enter the element to be searched:";
    cin>>key;
     
    cout<<"The first occurence of"<<" "<< key<<"is in"<<" "<<firstO(arr,key)<<"index"<<endl;
    cout<<"The Last occurence of"<<" "<< key<<"is in"<<" "<<lastO(arr,key)<<"index"<<endl;
     cout<<"The Total occurence of "<<" "<< key<<" is "<<" "<<lastO(arr,key)-firstO(arr,key)+1;

    }