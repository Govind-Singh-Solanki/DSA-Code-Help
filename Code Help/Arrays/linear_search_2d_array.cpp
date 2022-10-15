#include<iostream>

using namespace std;

bool isPresent(int arr[][4], int key, int row, int col){

    for(int i = 0; i < row; i++){

        for(int j = 0; j < col; j++){

            if(arr[i][j] == key)
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];

    int row = 3, col = 4;

    cout<<"Enter the elements of 2D array: ";

    for(int i = 0; i < row; i++){
        
        for(int j = 0; j < col; j++){

            cin>>arr[i][j];
        }
    }

    //taking key as input to search for
    int key;
    cout<<"Enter the key to search for: ";
    cin>>key;

    //checking if element is present or not
    if(isPresent(arr, key, row, col)){
        cout<<"Element found!"<<endl;
    }
    else{
        cout<<"Element not found!"<<endl;
    }

    return 0;
}