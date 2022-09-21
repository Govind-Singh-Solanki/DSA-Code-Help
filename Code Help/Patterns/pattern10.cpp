#include<iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the number of rows : ";
    cin>>n;

    int row = 1;

    while(row<=n) {

        int col =1, value = row;
        while(col<=row) {
            cout<<value<<" ";
            value--;
            col += 1;
        }
        cout<<endl;
        row += 1;
    }
    return 0;
}