#include<iostream>

using namespace std;

int fibonacci(int n){

    //Base Case
    if(n == 0 || n == 1)
    return n;

    //Recursive Relation
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;

    cout<<"Enter the term you want to print of Fibonacci series : ";
    cin>>n;

    cout<<fibonacci(n)<<endl;

    return 0;
}