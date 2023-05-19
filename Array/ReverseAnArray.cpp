#include <iostream>
using namespace std;

void reverseArr(int arr [], int size)
{
    int arr1[size];
    for (int i = 0; i < size; i++)
    {
        arr1[i] = arr[i];
        
    }
     for (int i = size-1; i>=0; i--)
    {
       cout<<arr1[i]<<" ";
        
    }

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
    cout<<"the reverse order is:";
    reverseArr(arr,n);
    
}