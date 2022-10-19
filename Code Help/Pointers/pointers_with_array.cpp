#include<iostream>

using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout<<"Address of array's first element : "<<arr<<endl;
    cout<<"Address of array's first element using index : "<<&arr[0]<<endl;

    cout<<"Address of arrays 3rd element : "<<arr + 2<<endl;
    cout<<"Address of arrays 3rd element using index : "<<&arr[2]<<endl;

    cout<<"Value of arrays 3rd element using pointer : "<<*(arr + 2)<<endl;

    return 0;
}