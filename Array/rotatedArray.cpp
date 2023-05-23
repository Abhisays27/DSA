#include <iostream>
using namespace std;

int searchInArray(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {

            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    int pivot = end;

    if(arr[pivot]==key){
        return pivot;
    }

    if (arr[pivot] > key && arr[size-1]<=key)
    {
        int s = pivot;
        int e = size - 1;
        int m = s + (e - s) / 2;

        while (s <= e)
        {
            if (arr[m] == key)
            {
                return key;
            }

            if (arr[m] < key)
            {
                s = m + 1;
            }

            else
            {
                e = m - 1;
            }
            m = s + (e - s) / 2;
        }
        return m;
    }

     else
    {
        int e = pivot;
        int s = 0;
        int m = s + (e - s) / 2;

        while (s <= e)
        {
            if (arr[m] == key)
            {
                return key;
            }

            if (arr[m] < key)
            {
                s = m + 1;
            }

            else
            {
                e = m - 1;
            }
            m = s + (e - s) / 2;
        }
        return m;
    }
    return -1;
}
int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    cout << "The element is present in"<<searchInArray(arr,5,22);
}