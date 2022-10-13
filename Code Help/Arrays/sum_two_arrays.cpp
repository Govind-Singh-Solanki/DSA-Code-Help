#include <bits/stdc++.h> 

using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    // Write your code here.
    
    int i = 0, j = 0, ans1 = 0, ans2 = 0, ans;
    vector<int> arr;
    
    while(i < n){
        
        int digit = a[i];
        ans1 = (ans1 * 10) + digit;
        i++;
    }
    
     while(j < m){
        
        int digit = b[j];
        ans2 = (ans2 * 10) + digit;
        j++;
    }
    
    ans = ans1 + ans2;
    
    while(ans != 0){
        
        int digit = ans % 10;
        arr.push_back(digit);
        ans /= 10;
    }
    
    reverse(arr.begin(), arr.end());
    
    return arr;
}

int main()
{
    vector<int> a;
    vector<int> b;

    for(int i = 0; i < 4; i++){
        int digit;
        cin>>digit;
        a.push_back(digit);
    }

    for(int i = 0; i < 1; i++){
        int digit;
        cin>>digit;
        b.push_back(digit);
    }

    vector<int> ans = findArraySum(a, 4, b, 1);

    for(int i = 0; i < ans.size(); i++){

        cout<<ans[i]<<" ";
    }cout<<endl;

    return 0;
}