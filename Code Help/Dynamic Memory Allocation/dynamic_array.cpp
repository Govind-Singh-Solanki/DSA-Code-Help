#include<iostream>

using namespace std;

int* updateArray(int arr[], int n){

    // int arr2[10];   --> local array wont be returned, throws error as its on stack

    int *arr2 = new int[5];     // --> this will return as the memory is allocated dynamically and its on heap, and it is recieved   using pointer

    for(int i = 0; i < n; i++){

        arr2[i] = arr[i] + 5;
    }
    
    return arr2;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int *ans = updateArray(arr, 5);

    for(int i = 0; i < 5; i++){

        cout<<ans[i]<<" ";
    }cout<<endl;

    return 0;
}