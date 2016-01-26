#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *y = new int(20);

    cout<<x<<endl;
    cout<<&x<<endl;

    cout<<y<<endl;
    cout<<&y<<endl;
    cout<<*y<<endl;

    int arr[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

    int *arr2 = new int[3];
    arr2[0]=10;
    arr2[1]=20;
    arr2[2]=30;
    cout<<arr2[0]<<endl;
    cout<<arr2[1]<<endl;
    cout<<arr2[2]<<endl;


    return 0;
}
