#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n){
    
    for(int i = 0; i < n-1; i++){

        bool swapFlag = false;

        for(int j = 0; j < n-i; j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapFlag = true;        //agar swap nhi hoga toh flag false rahega and matlab ki sab sorted hai
            }
        }

        if(swapFlag == false)       //optimized the code
        break;
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

    cout<<"Array after Bubble Sort : ";

    bubbleSort(arr, n);

    return 0;
}