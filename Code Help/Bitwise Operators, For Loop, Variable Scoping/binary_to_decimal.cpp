#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;

    cout<<"Enter a binary number : ";
    cin>>n;

    int ans = 0, i = 0;

    //Approach to solve
    while(n != 0)
    {
        int digit = n % 10;

        if(digit == 1)
        {
            ans = ans + pow(2, i);
        }
        i++;
        n /= 10;
    }

    cout<<ans;

    return 0;
}