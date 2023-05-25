#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "The elemnts are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
       

        for (int j = 0; j < size-1; j++)
        {
            if (arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
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
    selectionSort(arr, size);
    printArray(arr, size);
}