#include<iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the number of rows : ";
    cin>>n;

    int row = 1;

    while(row<=n) {

        int col =1, count = row;
        while(col<=row) {
            cout<<count<<" ";
            count++;
            col += 1;
        }
        cout<<endl;
        row += 1;
    }
    return 0;
}