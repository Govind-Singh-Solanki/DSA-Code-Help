#include<iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the number of rows : ";
    cin>>n;

    int row = 1;

    while(row<=n) {

        char start = 'A' + row -1;
        int col = 1;
        while(col<=row) {
            cout<<start<<" ";
            start++;
            col += 1;
        }
        start++;
        cout<<endl;
        row += 1;
    }
    return 0;
}