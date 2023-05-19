#include<iostream>
using namespace std;

int sumOfArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];

    }
    return sum;
}
int main()
{
    int n, arr[100];

    cout << "enter the size of array:";
    cin >> n;
    cout << "Enter the inputs:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Sum is:"<<sumOfArray(arr,n);
}