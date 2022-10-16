#include<iostream>

using namespace std;

int main()
{
    int num = 10;

    int *ptr = &num;

    cout<<"Value using name of container : "<<num<<endl;
    cout<<"Value using pointer : "<<*ptr<<endl;
    cout<<"Address of num : "<<&num<<endl;
    cout<<"Address of num using pointer : "<<ptr<<endl;
    cout<<"Incrementing num using pointer : "<<++(*ptr)<<endl;


    double doub = 4.5;
    double *ptr2 = &doub;

    cout<<"Double variable using name : "<<doub<<endl;
    cout<<"Double variable using double pointer : "<<*ptr2<<endl;
    cout<<"Size of pointer : "<<sizeof(ptr2)<<endl;

    return 0;
}