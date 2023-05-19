#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int inp)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == inp)
       
        return i;
        
    }
    return -1;
    
   
}
int main()
{
    int n, arr[100], p;

    cout << "enter the size of array:";
    cin >> n;
    cout << "Enter the inputs:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element you want to search:";
    cin >> p;
    int index = linearSearch(arr, n, p);
     if (index == -1)
        cout << "Element is not present in the array";
    else
        cout << "Element found at position " << index;
}