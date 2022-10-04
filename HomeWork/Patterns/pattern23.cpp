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
        int space = n - row;
        while(space)
        {
            cout<<" "<<" ";
            space -= 1;
        }

        int col = 1;
        while(col <= row)
        {
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}