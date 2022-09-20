#include<iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the number of rows : ";
    cin>>n;

    int i = 1, j = 1;

    while(i<=n) {

        while(j<=n * i) {
            cout<<j<<" ";
            j += 1;
        }
        cout<<endl;
        i += 1;
    }
    return 0;
}