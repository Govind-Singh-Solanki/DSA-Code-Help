#include <iostream>

using namespace std;

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{

    int p = 5;
    printf("%d");
    // int n;
    // cout << "Enter size of array : ";
    // cin >> n;

    // int arr[1000];

    // cout<<"Enter the elements of array : ";

    // for (int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }

    // int ans = sumArray(arr, n);

    // cout << "Sum of all the elements of array is : " << ans << endl;

    // return 0;
}