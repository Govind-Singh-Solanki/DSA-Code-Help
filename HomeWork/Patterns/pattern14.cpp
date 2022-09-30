#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter number of rows : ";
    cin>>n;

    int row = 1;

    while(row <= n)
    {
        char start = 'A' + row - 1;
        int col = 1;
        while(col <= n)
        {
            cout<<start<<" ";
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}