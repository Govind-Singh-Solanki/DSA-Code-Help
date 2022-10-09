//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int arr[], int n, int m, int mid){
        int student = 1, sum = 0;
        
        for(int i = 0; i < n; i++){
            if(sum + arr[i] <= mid){
                sum += arr[i];
            }
            else{
                student++;
                if(student > m || arr[i] > mid)
                return false;
                sum = arr[i];
            }
        }
        return true;
    }
    
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M > N)
        return -1;
        
        int st = 0, sum = 0;
        
        for(int i = 0; i < N; i++){
            sum += A[i];
        }
        
        int end = sum;
        
        int mid = st + (end - st)/2;
        
        int ans;
        
        while(st <= end){
            if(isPossible(A, N, M, mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
            mid = st + (end - st)/2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends