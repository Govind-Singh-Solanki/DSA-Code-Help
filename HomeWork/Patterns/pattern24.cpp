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
        int space = row - 1;
        while(space)
        {
            cout<<" "<<" ";
            space -= 1;
        }

        int col = 1;
        int value = row;
        while(col <= (n - row + 1))
        {
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}