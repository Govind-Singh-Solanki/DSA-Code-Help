#include<iostream>

using namespace std;

void largestRowSum(int arr[][4], int row, int col){

    int maxSum = -1, largestRow = -1;

    for(int i = 0; i < row; i++){

        int sum = 0;
        
        for(int j = 0; j < col; j++){

            sum += arr[i][j];
        }

        if(sum > maxSum){

            maxSum = sum;
            largestRow = i + 1;
        }
    }

    cout<<"Largest Sum Row is: "<<largestRow<<endl;
    cout<<"Sum of largest Row is: "<<maxSum<<endl;
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

    largestRowSum(arr, row, col);

    return 0;
}