#include<iostream>
using namespace std;

int sumArray(int arr[], int size) {
    // base cases
    if (size == 0) return 0;
    if (size == 1) return arr[0];
    if (size == 2) return arr[0] + arr[1];
    
    // recursive case
    return arr[0] + sumArray(arr + 1, size - 1);
}

int main() {
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;
    cout << sumArray(arr, size);
    
    return 0;
}
