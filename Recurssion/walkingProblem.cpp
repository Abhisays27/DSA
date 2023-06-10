#include <iostream>
using namespace std;

void walk(int src, int desc)
{
    cout << "source " << src << "destination " << desc << endl;
    if (src == desc)
    {
        cout << "Destination reached" << endl;
        return;
    }
    src++;
    walk(src, desc);
}
int main()
{
    int src = 1;
    int desc;
    cout << "Enter Destination:";
    cin >> desc;
    walk(src, desc);
}