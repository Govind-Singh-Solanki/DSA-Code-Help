#include<iostream>

using namespace std;

bool isPresent(int *arr, int size, int key){

    //Base Case
    if(size == 0)
    return false;

    if(arr[0] == key)
    return true;

    //Recursive Call
    return isPresent(arr+1, size-1, key);

}

int main()
{
    int size;

    cout<<"Enter size of array : ";
    cin>>size;

    int *arr = new int[size];

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int key;

    cout<<"Enter the key to search for : ";
    cin>>key;

    bool res = isPresent(arr, size, key);

    if(res)
        cout<<"Element is Present!"<<endl;
    else   
        cout<<"Element is Not Present!"<<endl;

    return 0;
}