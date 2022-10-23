#include <bits/stdc++.h>

using namespace std;

int firstOccurance(int arr[], int n, int key)
{

    int ans = -1;

    int start = 0, end = (n - 1);
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int lastOccurance(int arr[], int n, int key)
{

    int ans = -1;

    int start = 0, end = (n - 1);
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    int n;

    cout << "Enter size of array : ";
    cin >> n;

    int arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number to find occurance of : ";
    cin >> key;

    pair<int, int> ans;

    ans.first = firstOccurance(arr, n, key);
    ans.second = lastOccurance(arr, n, key);

    cout << "First occurance of element is at index : " << ans.first << endl;
    cout << "Last occurance of element is at index : " << ans.second << endl;

    return 0;
}