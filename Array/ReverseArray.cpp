#include<iostream>
using namespace std;

void Reverse(int arr[],int size){
    int s = 0;
    int e = size -1;
    while (s<=e)
    {
        swap(arr[s],arr[e]);
        s=s+1;
        e=e-1;
        
    }
    
}
void printArray(int arr[], int size)
{
    cout << "The elemnts are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    Reverse(arr,n);
    printArray(arr,n);
   
}