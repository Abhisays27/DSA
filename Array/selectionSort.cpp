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
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
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