#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int key){

    int start = 0, end = (n - 1);

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
        
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    int n;
    int arr[1000];

    cout<<"Enter size of array : ";
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element you want to search for : ";
    cin>>key;

    int ans = binarySearch(arr, n, key);

    if(ans == -1)
        cout<<"Element is not present in array!"<<endl;
    else
        cout<<"Element is present in array at index : "<<ans<<endl;

    return 0;
}