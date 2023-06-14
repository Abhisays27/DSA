#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot=arr[s];
    //count index till it is smaller then other
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }

    }
    //place at the index pos.
   int pivotIndex=s+count;
   swap(arr[s],arr[pivotIndex]);

   //right or left wala part
   int i=s;
   int j=e;
   while(i<pivotIndex && j>pivotIndex){
    while(arr[i]<=pivot){
        i++;
    }
     while(arr[j]>pivot){
        j--;
    }
    if(i<pivotIndex && j>pivotIndex){
        swap(arr[i++],arr[j--]);
    }
    
   }
   return pivotIndex;
 
}
void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
   int p=partition(arr,s,e);
//recursive
   quickSort(arr,s,p-1);
   quickSort(arr,p+1,e);

}
int main()
{
    int arr[5]={2,4,1,6,9};
    int n=5;
    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}