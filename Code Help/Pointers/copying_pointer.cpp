#include<iostream>

using namespace std;

int main()
{
    int num = 5;

    int *p = &num;
    int *q = p;

    cout<<*p<<endl;
    cout<<*q<<endl;

    return 0;
}