#include<iostream>
using namespace std;



double morePrecesion(int n,int precision,int tempSol){
    double factor =1;
    double ans = tempSol;
    for(int i=1;i<=precision;i++){
        factor = factor/10;
        for(double j =ans;j*j<n;j=j+factor ){
            ans=j;

        }
        return ans;
       

    }
}
    
    
    long long int squareRootInt(int n){
    int s=0;
    int e=n;
    long long int mid = s-(e-s)/2;
    int ans;


    while(s<=e){
        int square = mid *mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            int ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }
    return ans;
}
 




 
int main()
{
int n;
cout<<"Enter the number:";
cin>>n;
int tempSol=squareRootInt(n);
cout<<"Answer is:"<<morePrecesion(n,3,tempSol);
}

