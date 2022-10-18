#include<iostream>

using namespace std;

int main()
{
    int value = 30;

    int* ptr = &value;

    int** ptr2 = &ptr;

    cout<<"Value : "<<value<<endl;
    cout<<"Value using pointer 1 : "<<*ptr<<endl;
    cout<<"Value using double pointer : "<<**ptr2<<endl;
    cout<<"Address of value using variable : "<<&value<<endl;
    cout<<"Address of value using pointer 1 : "<<ptr<<endl;
    cout<<"Address of pointer 1 : "<<&ptr<<endl;
    cout<<"Address of value using double pointer : "<<*ptr2<<endl;
    cout<<"Address of double pointer : "<<&ptr2<<endl;
    cout<<"Address of pointer 1 using double pointer : "<<ptr2<<endl;

    return 0;
}