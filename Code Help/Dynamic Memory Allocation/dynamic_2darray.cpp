#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter size of 2d array : ";
    cin>>n;

    int **arr = new int*[n];    //created an array of pointers which will point to different dynamically allocated arrays

    for(int i = 0; i < n; i++){

        arr[i] = new int[n];        //assigns address of each dynamically allocated array to that array of pointers.
    }

    //taking input in dynamically created 2d array
    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            cin>>arr[i][j];
        }
    }

    cout<<endl;
    //showing output of 2d array 
    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    //releasing memory of dynamically allocated array
    for(int i = 0; i < n; i++){

        delete []arr[i];
    }

    //releasing memory of dynamically allocated array of pointers
    delete []arr;

    return 0;
}