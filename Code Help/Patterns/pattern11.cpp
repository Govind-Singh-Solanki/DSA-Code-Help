#include<iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the number of rows : ";
    cin>>n;

    int row = 1;
    char start = 'A';

    while(row<=n) {

        int col =1;
        while(col<=n) {
            cout<<start<<" ";
            col += 1;
        }
        start++;
        cout<<endl;
        row += 1;
    }
    return 0;
}