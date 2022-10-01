#include<iostream>

using namespace std;

int main()
{
    int a, b, res;
    char op;

    cout<<"Enter 2 numbers you want to perform operation on : ";
    cin>>a>>b;

    cout<<"Enter the operation you want to perform : ";
    cin>>op;

    switch (op)
    {
    case '+': res = ( a + b );
              break;
    
    case '-': res = ( a - b );
              break;

    case '*': res = ( a * b );
              break;

    case '/': res = ( a / b );
              break;

    case '%': res = ( a % b );
              break;      

    default: cout<<"Please enter a valid operation!"<<endl;    
    }

    cout<<a<<" "<<op<<" "<<b<<" = "<<res<<endl;

    return 0;
}