#include<iostream>

using namespace std;

void columnSum(int arr[][4], int row, int col){

    for(int i = 0; i < col; i++){

        int sum = 0;

        for(int j = 0; j < row; j++){

            sum += arr[j][i];
        }
        cout<<"Column "<<i+1<<" ka sum: "<<sum<<endl;
    }
}

int main()
{
    int arr[3][4];

    int row = 3, col = 4;

    cout<<"Enter array elements: ";
    
    for(int i = 0; i < row; i++){

        for(int j = 0; j < col; j++){

            cin>>arr[i][j];
        }
    }

    //taking sum of array row wise

    for(int i = 0; i < row; i++){

        int sum = 0;

        for(int j = 0; j < col; j++){

            sum += arr[i][j];
        }
        cout<<"Row "<<i+1<<" ka sum: "<<sum<<endl;
    }cout<<endl;

    columnSum(arr, row, col);

    return 0;
}