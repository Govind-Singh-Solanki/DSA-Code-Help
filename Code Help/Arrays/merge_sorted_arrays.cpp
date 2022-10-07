#include<bits/stdc++.h>

using namespace std;

void mergeArrays(int arr[], int arr2[], int n, int m){

    vector<int> ans;

    int i = 0, j = 0;

    while(i < n && j < m){
        if(arr[i] <= arr2[j]){
            ans.push_back(arr[i++]);
        }
        else{
            ans.push_back(arr2[j++]);
        }
    }

    while(i < n){
        ans.push_back(arr[i++]);
    }

    while(j < m){
        ans.push_back(arr2[j++]);
    }

    for(int x = 0; x < ans.size(); x++){
        cout<<ans[x]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[10];
    int arr2[10];

    int n, m;

    cout<<"Enter sizes of arrays : ";
    cin>>n>>m;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < m; i++){
        cin>>arr2[i];
    }

    mergeArrays(arr, arr2, n, m);

    return 0;
}
