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

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++) // No. of rounds
    {
        int temp = arr[i];
        int j = i - 1;

        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
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
    insertionSort(arr, size);
    printArray(arr, size);
}