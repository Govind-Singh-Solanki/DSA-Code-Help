#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter the number you want to check : ";
    cin>>n;

    bool flag = true;

    for (int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            flag = false;
            break;
        }
    }
    
    if(flag == false)
    {
        cout<<n<<" is not a Prime Number!";
    }
    else
    {
        cout<<n<<" is a Prime Number!";
    }

    return 0;
}