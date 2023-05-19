#include <iostream>
using namespace std;
int findMax(int arr[], int size)
{
    int max = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
       if(arr[i] > max)
        {max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size)
{
    int min = INT16_MAX;
    for (int i = 0; i < size; i++)
    {
       if(arr[i] < min)
        {min = arr[i];
        }
    }
    return min;
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
    cout << "Max is :" << findMax(arr, n)<<endl;
     cout << "Min is :" << findMin(arr, n)<<endl;
}