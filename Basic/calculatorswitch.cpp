#include <iostream>
using namespace std;
int main()
{
    int num,num1,num2;
    cout<<"Enter two numbers:"<<endl;
    cin>>num1>>num2;
    cout << "What operation you want to perform:?" << endl
         << endl;
    cout << "1. Addition" << endl;
    cout << "2. subtraction" << endl;
    cout << "3. multiplication" << endl;
    cout << "4. division" << endl;
    cin >> num;

    switch (num)
    {
        case 1:
        cout<<num1+num2;
        break;
         case 2:
        cout<<num1-num2;
        break;
         case 3:
        cout<<num1*num2;
        break;
         case 4:
        cout<<num1/num2;
        break;
        default:
        cout<<"Wrong Input!";
    }
    return 0;
}