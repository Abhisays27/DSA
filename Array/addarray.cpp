#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a[3]={4,5,1};
int b[3]={3,4,5};
int n=3;
int m=3;


    int num1=0;
	for(int i=0;i<n;i++){
		int num1= num1+a[i]*pow(10,n-1-i);
	}
		int num2=0;
	for(int i=0;i<m;i++){
		int num2= num2+a[i]*pow(10,m-1-i);
	}
	int num3=num1+num2;
	int count=0;
	while((num3/count)!=0){
		count++;

	}
	int arr[count];
	arr[0]=num3/pow(10,count);
		
	for(int i=1;i<=count;i++){
		num3=num3-(pow(10,count)*arr[i-1])/pow(10,count-1);
		arr[i]=num3;
		
		
	}
    for(int i=0;i<=count;i++){
        cout<<arr[i]<<" ";
    }
   
	
}
