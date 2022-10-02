#include<iostream>

using namespace std;

int power(int a, int b)
{
    int res = 1;

    for(int i = 1; i <= b; i++)
    {
        res = res * a;
    }
    return res;
}

int main()
{
    int a, b;

    cin>>a>>b;

    int ans = power(a, b);

    cout<<ans<<endl;

    return 0;
}