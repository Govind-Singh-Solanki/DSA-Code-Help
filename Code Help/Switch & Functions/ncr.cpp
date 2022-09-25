#include<iostream>

using namespace std;

int factorial(int num)
{
    int ans = 1;

    for(int i = num; i > 0; i--)
    {
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r)
{
    int ans = 1;

    if ( r == 0 )
    {
        return ans;
    }
    else
    {
        int ans = (factorial(n) / (factorial(r) * factorial(n-r)));
        return ans;
    }
}

int main()
{
    int n, r;

    cin>>n>>r;

    int res = nCr(n, r);

    cout<<res<<endl;

    return 0;
}