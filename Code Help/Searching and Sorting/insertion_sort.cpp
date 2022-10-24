#include<iostream>

using namespace std;

void insertionSort(int arr[], int n){
    int i = 1;

    while(i < n){
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0){

            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        i++;
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

    insertionSort(arr, n);

    return 0;
}