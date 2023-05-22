#include <iostream>
using namespace std;


   

void printArray(int arr[], int size)
{
    cout << "The elemnts are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }cout<<endl;
}

void swapAlternate(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[100], size;
     cout << "enter the size of array:";
    cin >> size;
    cout << "Enter the inputs:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    printArray(arr, size);
    swapAlternate(arr, size);
    printArray(arr, size);
}