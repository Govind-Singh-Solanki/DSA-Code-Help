#include<iostream>

using namespace std;

void sayDigit(int n, string arr[]){

    //Base Case
    if(n == 0)
    return;

    int digit = n%10;

    n /= 10;

    //Recursive Relation
    sayDigit(n, arr);

    cout<<arr[digit]<<" ";

}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int num;

    cout<<"Enter the number to print digits of : ";
    cin>>num;

    sayDigit(num, arr);

    return 0;
}