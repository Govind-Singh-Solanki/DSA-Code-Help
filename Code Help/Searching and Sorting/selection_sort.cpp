#include<bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int n;

    cout<<"Enter size of array : ";
    cin>>n;

    int arr[100];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Array before sorting : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"Array after Selection Sort : ";

    selectionSort(arr, n);

    return 0;
}