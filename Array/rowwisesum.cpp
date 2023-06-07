#include<iostream>
using namespace std;

void printArray(int arr[][4], int row, int col) {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <=col; j++) {
            cout<<arr[i][j]<<"";
        }
    }
}

int sumOfRow(int arr[][4],int x ,int col){
    int sum=0;

    for(int j=1;j<=col;j++){
        sum=sum+arr[x][j];

    }
    return sum;
}


int main()
{ int row,col;
cout<<"Enter Row and Coloumn Respectiveley(Row*Coloumn):";
cin>>row>>col;
    
    int arr[3][4];
  
    cout<<"Enter elememts in the array(3*4):";

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cin>>arr[i][j];
        }
    }
     printArray(arr, row, col);
     cout<<endl;
     for (int i=1;i<=row;i++){
        cout<<"Sum of"<<" "<<i<<""<<"is: "<<sumOfRow(arr,i,col)<<endl;
     }
}