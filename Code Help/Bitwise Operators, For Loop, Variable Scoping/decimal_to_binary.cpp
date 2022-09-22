#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the number you want binary of : ";
    cin>>n;

    int m = n;

    int ans = 0;
    int i = 0;

    while(n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }

    cout<<"Binary of " << m << " is "<< ans << endl;

    return 0;
}