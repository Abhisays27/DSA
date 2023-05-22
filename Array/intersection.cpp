#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr1[10] = {1,2,2,3,4};
    int S=5;
    //int arr2[10] = {2,2,3,3};
    for(int i =0;i<5;i++){
        for(int j=1;j<5;j++)
        {
            if(S==arr1[i]+arr1[j]){
                cout<<arr1[i]<<","<<arr1[j]<<endl;
                sort(arr1[i],arr1[j]);

                break;

            }
        }
    }
}