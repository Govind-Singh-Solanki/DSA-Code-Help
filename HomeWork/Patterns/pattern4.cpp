#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the number of rows : ";
    cin>>n;

    int i = 1;
    while (i <= n)
    {
        /*
        //Logic 1
        int j = n;
        while (j >= 1)
        {
            cout<<j<<" ";
            j -= 1;
        }
        */

        //Logic 2
        int j = 1;
        while (j <= n)
        {
            cout<<(n-j+1)<<" ";
            j += 1;
        }

        cout<<endl;
        i += 1;
    }  

    return 0;
}