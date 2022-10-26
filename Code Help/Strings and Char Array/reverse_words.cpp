//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<char> temp;
        string str = "";
        
        for(int i = S.length()-1; i >= 0; i--){
            
            if(S[i] != '.'){
                temp.push_back(S[i]);
            }
            else{
                reverse(temp.begin(), temp.end());
                for(int j = 0; j < temp.size(); j++){
                    str += temp[j];
                }
                str += '.';
                temp.clear();
            }
        }
        reverse(temp.begin(), temp.end());
        for(int j = 0; j < temp.size(); j++){
            str += temp[j];
        }
        return str;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends