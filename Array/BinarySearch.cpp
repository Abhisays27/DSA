#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
int start = 0;
int end = size-1;
int mid = start + (end-start)/2;

while(start<=end){
    if(arr[mid]==key){
        return mid;
    }

    if(arr[mid]<key){
        start = mid+1;
    }

    else{
        end = mid-1;
    }
    mid = start + (end-start)/2;
}
return -1;
}

int main()
{
    int arr[100], size,key;
     cout << "enter the size of array:";
    cin >> size;
    cout << "Enter the inputs:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter the element to be searched:";
    cin>>key;
     binarySearch(arr,size,key);
    cout<<"The element"<<key<<" "<<"is in"<<binarySearch(arr,size,key)<<" "<<"index";

    }