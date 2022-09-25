#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the number upto which you want the series : ";
    cin>>n;

    int a = 0, b = 1;
    cout<<a<<" "<<b<<" ";

    int res;

    for (int i = 2; i <= n; i++)
    {   
        res = a + b;
        cout<<res<<" ";
        a = b;
        b = res;
    }
    

    return 0;
}