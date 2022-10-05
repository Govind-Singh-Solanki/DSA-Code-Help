#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;

        while (col <= (n - row + 1))
        {
            cout << col << " ";
            col++;
        }
        // cout<<endl;

        int star = 1;

        while (star <= ((2 * row) - 2))
        {
            cout << "*" << " ";
            star++;
        }
        // cout<<endl;

        col = n - row + 1;

        while (col >= 1)
        {
            cout << col << " ";
            col--;
        }
        cout << endl;

        row++;
    }

    return 0;
}